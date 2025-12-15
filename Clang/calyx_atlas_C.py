#!/usr/bin/env python3
"""
CALYX-OPTIMIZED C BUNDLER

Bundles C source files into a single file FOR LLM CONSUMPTION.
Key features:
1. Explicit structure (no implicit boundaries)
2. Declarative metadata (no heuristics)
3. Lossless encoding (fully reversible)
4. Flat, addressable sections (easy for attention heads)

USAGE:
    python3 calyx_c_bundle.py --output bundle.calyx.c
    # Then in ChatGPT/Claude: "Here's my bundled C project..."
"""

import json
import re
import sys
from pathlib import Path
from typing import Dict, List, Any, Optional, Set
from dataclasses import dataclass, asdict
from datetime import datetime
import subprocess

# ============================================================================
# CALYX BUNDLE FORMAT
# ============================================================================
"""
The bundle is structured as EXPLICIT SECTIONS:
1. METADATA (what this is, how to read it)
2. FILE_MAP (flat dictionary of file→metadata)
3. INCLUDE_GRAPH (dependencies as edges)
4. FILE_CONTENTS (actual source, unmodified)
5. PUBLIC_API (what to expose)

This is UGLY for humans but PERFECT for transformers:
- No implicit structure
- No hidden state
- No complex parsing needed
- Every token has a clear "belongs_to"
"""

@dataclass
class CalyxCFile:
    """Lossless C file representation"""
    name: str                     # "src/utils.c"
    path: str                     # "src/utils.c"
    source: str                   # Original source (preserved exactly)
    includes: List[str]           # ALL #includes (system and local)
    defines: List[str]            # #define macros
    functions: List[str]          # Function names defined
    dependencies: List[str]       # Internal dependencies only
    category: str                 # "NEXUS", "UTILITY", etc.
    header: Optional[str] = None  # Corresponding .h file if exists

class CalyxCBundler:
    """Transformer-optimized bundler for C projects"""
    
    def __init__(self, root: str = ".", verbose: bool = False):
        self.root = Path(root)
        self.verbose = verbose
        self.files: Dict[str, CalyxCFile] = {}
        self.headers: Dict[str, str] = {}  # .h file contents
        
    def log(self, msg: str):
        if self.verbose:
            print(f"[CALYX-C] {msg}")
    
    def normalize_path(self, path: Path) -> str:
        """Normalize path to POSIX style"""
        return str(path).replace("\\", "/")
    
    def relative_path(self, full_path: Path) -> str:
        """Get path relative to root"""
        try:
            return self.normalize_path(full_path.relative_to(self.root))
        except ValueError:
            return self.normalize_path(full_path)
    
    def extract_includes(self, source: str) -> List[str]:
        """Extract #include statements"""
        includes = []
        # Match #include <...> and #include "..."
        pattern = r'^\s*#\s*include\s*([<"][^>"]+[>"])'
        for match in re.finditer(pattern, source, re.MULTILINE):
            include = match.group(1)
            # Remove quotes/angle brackets
            clean = include.strip('<>"')
            includes.append(clean)
        return includes
    
    def extract_defines(self, source: str) -> List[str]:
        """Extract #define macros"""
        defines = []
        # Match #define MACRO or #define MACRO(value)
        pattern = r'^\s*#\s*define\s+([A-Za-z_][A-Za-z0-9_]*)(?:\s*\([^)]*\))?'
        for match in re.finditer(pattern, source, re.MULTILINE):
            defines.append(match.group(1))
        return defines
    
    def extract_functions(self, source: str) -> List[str]:
        """Extract function definitions"""
        functions = []
        
        # Remove comments to avoid false positives
        def remove_comments(text):
            # Remove /* */ comments
            text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)
            # Remove // comments
            text = re.sub(r'//.*$', '', text, flags=re.MULTILINE)
            return text
        
        clean_source = remove_comments(source)
        
        # Match function definitions
        # This is simplified - real C parsing would need a proper parser
        pattern = r'^\s*(?:[a-zA-Z_][a-zA-Z0-9_]*\s+)+\*?\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^;{]*\)\s*\{'
        for match in re.finditer(pattern, clean_source, re.MULTILINE):
            functions.append(match.group(1))
        
        return functions
    
    def detect_layer(self, rel_path: str) -> str:
        """Detect CALYX layer from path"""
        parts = rel_path.split("/")
        if len(parts) > 0:
            first = parts[0].lower()
            if first == "albeo":
                return "ALBEO"
            elif first in ["kern", "bridge"]:
                return "BRIDGE"
            elif first == "fsm":
                return "FSM"
            elif first == "nexus":
                return "NEXUS"
            elif first == "mneme":
                return "MNEME"
            elif first == "src" and len(parts) > 1:
                # Check subdirectory
                second = parts[1].lower()
                if second == "kernel":
                    return "NEXUS"
                elif second == "lib":
                    return "UTILITY"
        return "UTILITY"
    
    def analyze_c_file(self, path: Path) -> Optional[CalyxCFile]:
        """Analyze C source file"""
        rel_path = self.relative_path(path)
        
        # Read file
        try:
            with open(path, "r", encoding="utf-8", errors="ignore") as f:
                source = f.read()
        except Exception as e:
            self.log(f"ERROR reading {path}: {e}")
            return None
        
        # Extract information
        includes = self.extract_includes(source)
        defines = self.extract_defines(source)
        functions = self.extract_functions(source)
        category = self.detect_layer(rel_path)
        
        # Check for corresponding header
        header_path = None
        if path.suffix in [".c", ".cpp", ".cc"]:
            header_path = path.with_suffix(".h")
            if header_path.exists():
                try:
                    with open(header_path, "r", encoding="utf-8", errors="ignore") as f:
                        self.headers[self.relative_path(header_path)] = f.read()
                except Exception as e:
                    self.log(f"ERROR reading header {header_path}: {e}")
        
        # Determine internal dependencies
        dependencies = []
        for inc in includes:
            # Check if this include is internal (ends with .h and file exists)
            if inc.endswith(".h"):
                # Try to find the header in our project
                for file_path in self.files:
                    if file_path.endswith(inc):
                        dependencies.append(file_path)
                        break
        
        return CalyxCFile(
            name=rel_path,
            path=rel_path,
            source=source,
            includes=includes,
            defines=defines,
            functions=functions,
            dependencies=dependencies,
            category=category,
            header=header_path.name if header_path and header_path.exists() else None
        )
    
    def discover(self, patterns: Optional[List[str]] = None) -> None:
        """Discover and analyze all C files"""
        if patterns is None:
            patterns = ["**/*.c", "**/*.h", "**/*.cpp", "**/*.cc", "**/*.hpp"]
        
        excluded_dirs = {"__pycache__", ".git", ".pytest_cache", ".venv", "venv", "env", "node_modules", "build", "dist", "bin", "obj", "Debug", "Release"}
        excluded_files = {"test_", "_test.", "conftest."}
        
        for pattern in patterns:
            for path in self.root.glob(pattern):
                # Skip excluded directories
                if any(excl in str(path) for excl in excluded_dirs):
                    continue
                
                # Skip excluded files
                if any(excl in path.name for excl in excluded_files):
                    continue
                
                if path.is_file() and path.suffix in [".c", ".h", ".cpp", ".cc", ".hpp"]:
                    file_obj = self.analyze_c_file(path)
                    if file_obj:
                        self.files[file_obj.name] = file_obj
                        self.log(f"Analyzed: {file_obj.name} ({file_obj.category})")
    
    def build_dependency_graph(self) -> Dict[str, List[str]]:
        """Build explicit dependency graph"""
        graph = {}
        for name, file_obj in self.files.items():
            deps = set()
            
            for inc in file_obj.includes:
                # Check if this include is in our bundle
                for file_name in self.files:
                    # Match include to file
                    if inc == Path(file_name).name or file_name.endswith(f"/{inc}"):
                        deps.add(file_name)
                        break
            
            graph[name] = list(deps)
            self.log(f"Dependencies of {name}: {graph[name]}")
        
        # Topological sort
        sorted_names = []
        visited = set()
        temp = set()  # For cycle detection
        
        def visit(name):
            if name in temp:
                self.log(f"WARNING: Circular dependency detected: {name}")
                return
            if name in visited:
                return
            
            temp.add(name)
            for dep in graph.get(name, []):
                if dep in self.files:
                    visit(dep)
            temp.remove(name)
            visited.add(name)
            sorted_names.append(name)
        
        for name in self.files:
            if name not in visited:
                visit(name)
        
        # Reorder files based on dependencies
        sorted_files = {}
        for name in sorted_names:
            sorted_files[name] = self.files[name]
        self.files = sorted_files
        
        return graph
    
    def escape_c_string(self, text: str) -> str:
        """Escape string for C multiline string literal"""
        # Escape backslashes and quotes
        escaped = text.replace('\\', '\\\\').replace('"', '\\"')
        # Escape newlines
        escaped = escaped.replace('\n', '\\n"\n"')
        return escaped
    
    def generate_bundle(self, output_path: str) -> str:
        """Generate LLM-optimized bundle"""
        
        # Build metadata
        metadata = {
            "format_version": "calyx-c-1.0",
            "total_files": len(self.files),
            "total_headers": len(self.headers),
            "layers": {},
            "external_includes": set(),
            "generated_at": datetime.utcnow().isoformat() + "Z"
        }
        
        # Count by layer and collect external includes
        for file_obj in self.files.values():
            metadata["layers"][file_obj.category] = metadata["layers"].get(file_obj.category, 0) + 1
            
            for inc in file_obj.includes:
                # Check if this is external (not in our bundle)
                is_external = True
                for file_name in self.files:
                    if inc == Path(file_name).name or file_name.endswith(f"/{inc}"):
                        is_external = False
                        break
                
                if is_external:
                    metadata["external_includes"].add(inc)
        
        metadata["external_includes"] = sorted(list(metadata["external_includes"]))
        
        # Build dependency graph
        graph = self.build_dependency_graph()
        
        # Generate bundle content
        lines = []
        
        # ==================== SECTION 1: METADATA ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* CALYX C BUNDLE - LLM OPTIMIZED FORMAT */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("")
        lines.append("/* METADATA SECTION */")
        lines.append("const char* CALYX_METADATA = " + json.dumps(metadata, indent=2) + ";")
        lines.append("")
        
        # ==================== SECTION 2: FILE MAP ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* FILE MAP (name → metadata) */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* FILE_MAP structure would be defined here */")
        lines.append("/* In C, we'd use an array of structs or similar */")
        lines.append("")
        
        # Create a simple file map as comments for LLM consumption
        lines.append("/*")
        lines.append("FILE MAP:")
        for name, file_obj in self.files.items():
            lines.append(f"  {name}:")
            lines.append(f"    layer: {file_obj.category}")
            lines.append(f"    functions: {file_obj.functions}")
            lines.append(f"    defines: {file_obj.defines}")
            if file_obj.header:
                lines.append(f"    header: {file_obj.header}")
        lines.append("*/")
        lines.append("")
        
        # ==================== SECTION 3: DEPENDENCY GRAPH ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* DEPENDENCY GRAPH (file → [dependencies]) */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/*")
        lines.append("DEPENDENCY GRAPH:")
        for name, deps in graph.items():
            lines.append(f"  {name}: {deps}")
        lines.append("*/")
        lines.append("")
        
        # ==================== SECTION 4: FILE CONTENTS ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* FILE CONTENTS (PRESERVED EXACTLY) */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("")
        
        # Add header files first
        if self.headers:
            lines.append("/* HEADER FILES */")
            lines.append("/* " + "-" * 60 + " */")
            for header_path, content in self.headers.items():
                lines.append(f"/* HEADER: {header_path} */")
                lines.append("/* " + "-" * 60 + " */")
                lines.append(content)
                lines.append("")
        
        # Add source files
        lines.append("/* SOURCE FILES */")
        lines.append("/* " + "-" * 60 + " */")
        for name, file_obj in self.files.items():
            # Skip .h files since we already added them
            if name.endswith(".h"):
                continue
                
            lines.append(f"/* FILE: {name} */")
            lines.append(f"/* LAYER: {file_obj.category} */")
            lines.append(f"/* PATH: {file_obj.path} */")
            lines.append("/* " + "-" * 60 + " */")
            lines.append(file_obj.source)
            lines.append("")
        
        # ==================== SECTION 5: PUBLIC API ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* PUBLIC API SUMMARY */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/*")
        lines.append("AVAILABLE FUNCTIONS BY MODULE:")
        
        # Group functions by file
        funcs_by_file = {}
        for name, file_obj in self.files.items():
            if file_obj.functions:
                funcs_by_file[name] = file_obj.functions
        
        for file_name, functions in funcs_by_file.items():
            lines.append(f"  {file_name}:")
            for func in functions:
                lines.append(f"    - {func}")
        
        lines.append("")
        lines.append("DEFINED MACROS:")
        all_defines = set()
        for file_obj in self.files.values():
            all_defines.update(file_obj.defines)
        for define in sorted(all_defines):
            lines.append(f"  - {define}")
        
        lines.append("*/")
        lines.append("")
        
        # ==================== SECTION 6: COMPILATION NOTES ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* COMPILATION NOTES */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/*")
        lines.append("This is a CALYX bundle - not meant for direct compilation.")
        lines.append("To compile the original project:")
        lines.append("  1. Extract files using the structure above")
        lines.append("  2. Use the original build system (Makefile, CMake, etc.)")
        lines.append("  3. Link with external dependencies:")
        for inc in metadata["external_includes"]:
            lines.append(f"     - {inc}")
        lines.append("*/")
        lines.append("")
        
        # ==================== SECTION 7: HELPER FUNCTIONS ====================
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/* HELPER FUNCTIONS (for analysis) */")
        lines.append("/* " + "=" * 70 + " */")
        lines.append("/*")
        lines.append("To analyze this bundle programmatically:")
        lines.append("  1. Parse CALYX_METADATA JSON string")
        lines.append("  2. Scan for /* FILE: comments to locate files")
        lines.append("  3. Use dependency graph for build order")
        lines.append("  4. Extract functions using regex patterns")
        lines.append("*/")
        
        # Write to file
        content = "\n".join(lines)
        output_file = self.root / output_path
        
        with open(output_file, "w", encoding="utf-8") as f:
            f.write(content)
        
        self.log(f"Bundle written: {output_file}")
        
        # Stats
        print(f"\n{'='*60}")
        print("CALYX C BUNDLE COMPLETE")
        print(f"{'='*60}")
        print(f"Output: {output_file}")
        print(f"Total files: {len(self.files)}")
        print(f"Header files: {len(self.headers)}")
        print(f"Layers: {metadata['layers']}")
        print(f"Size: {len(content) / 1024:.1f} KB")
        print(f"External includes: {len(metadata['external_includes'])}")
        print(f"{'='*60}")
        
        return str(output_file)

def main():
    """Command line interface"""
    import argparse
    
    parser = argparse.ArgumentParser(
        description="Bundle C source files for LLM consumption (CALYX format)"
    )
    parser.add_argument(
        "--output", "-o",
        default="calyx_bundle.c",
        help="Output file (default: calyx_bundle.c)"
    )
    parser.add_argument(
        "--root", "-r",
        default=".",
        help="Project root (default: .)"
    )
    parser.add_argument(
        "--patterns", "-p",
        nargs="+",
        default=["**/*.c", "**/*.h", "**/*.cpp", "**/*.cc"],
        help="Glob patterns for files"
    )
    parser.add_argument(
        "--verbose", "-v",
        action="store_true",
        help="Verbose output"
    )
    
    args = parser.parse_args()
    
    bundler = CalyxCBundler(root=args.root, verbose=args.verbose)
    bundler.discover(args.patterns)
    bundler.generate_bundle(args.output)

if __name__ == "__main__":
    main()
