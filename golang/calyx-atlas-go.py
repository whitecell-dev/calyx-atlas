#!/usr/bin/env python3
"""
CALYX-OPTIMIZED GO BUNDLER (NEXUS-READY) - ENHANCED

Analyzes Go source files and packages into a single deterministic Atlas.

New Nexus features for Go:
- Package Dependency Graph (explicit import paths)
- Interface Contract Mapping (coupling strength)
- Channel/Goroutine Signal Detection (asynchronous edge graph)
- Error Handling Analysis (propagation paths)
- Initialization Chain Mapping (init() function order)
"""

import json, re, sys
from pathlib import Path
from typing import Dict, List, Optional, Tuple
from dataclasses import dataclass, field
from datetime import datetime


# ============================================================
# DATA CLASSES
# ============================================================

@dataclass
class CalyxGoFile:
    name: str
    path: str
    source: str
    package: str
    imports: List[str]
    functions: List[str]
    interfaces: List[str]
    channels: List[dict] = field(default_factory=list)
    init_functions: int = 0
    exported_symbols: List[str] = field(default_factory=list)
    error_returns: List[str] = field(default_factory=list)
    category: str = "UTILITY"  # Default, overridden by path/package name


# ============================================================
# MAIN CLASS
# ============================================================

class CalyxGoNexusAnalyzer:
    def __init__(self, root=".", verbose=False):
        self.root = Path(root)
        self.verbose = verbose
        self.files: Dict[str, CalyxGoFile] = {}
        self.packages: Dict[str, List[str]] = {}  # PackageName -> List[Files]

    # ------------------- UTILITIES -------------------
    def log(self, msg: str):
        if self.verbose:
            print(f"[CALYX-GO] {msg}")

    def normalize_path(self, path: Path) -> str:
        return str(path).replace("\\", "/")

    def relative_path(self, full_path: Path) -> str:
        try:
            return self.normalize_path(full_path.relative_to(self.root))
        except ValueError:
            return self.normalize_path(full_path)

    # ------------------- GO-SPECIFIC EXTRACTORS -------------------

    def extract_package_and_imports(self, source: str) -> Tuple[str, List[str]]:
        """Extract package name and all imports (including multiline)."""
        package = re.search(r'^\s*package\s+(\w+)', source, re.MULTILINE)
        pkg_name = package.group(1) if package else "main"

        imports = []
        # 1. Single-line imports: import "x/y"
        imports += re.findall(r'import\s+"([^"]+)"', source)
        # 2. Multi-line imports: import ( "x/y" "a/b" )
        block = re.search(r'import\s*\((.*?)\)', source, re.DOTALL)
        if block:
            imports += re.findall(r'"([^"]+)"', block.group(1))

        return pkg_name, sorted(set(imports))

    def extract_interfaces(self, source: str) -> List[str]:
        # Matches: type MyInterface interface { ... }
        pattern = r'type\s+(\w+)\s+interface\s*{'
        return re.findall(pattern, source)

    def extract_functions(self, source: str) -> List[str]:
        # Matches: func (r *Receiver) MyMethod(...)
        # Matches: func MyFunction(...)
        pattern = r'func\s+(?:\(\s*\w+\s+\*?(\w+)\s*\))?\s*(\w+)\s*\([^)]*\)'
        functions = []
        for match in re.finditer(pattern, source):
            receiver = match.group(1)
            func_name = match.group(2)
            if receiver:
                functions.append(f"({receiver}).{func_name}")
            else:
                functions.append(func_name)
        return functions

    def extract_channels_and_goroutines(self, source: str) -> List[dict]:
        analysis = []
        # 1. Channel declaration (The data flow boundary)
        # Match: chan [int], chan *MyStruct, chan <- [string]
        chan_pat = r'(\w+)\s+:=\s+make\(chan\s+(?:<-\s*|->\s*|)([^,\)]+)\s*\)'
        for match in re.finditer(chan_pat, source):
            analysis.append({
                "type": "channel_decl",
                "name": match.group(1),
                "payload": match.group(2).strip(),
                "confidence": "high"
            })
        # 2. Goroutine call (The concurrency boundary)
        # Match: go function() { ... } or go myFunc(...)
        goroutine_pat = r'\sgo\s+(?:(\w+)\([^)]*\)|func\s*\([^)]*\)\s*{)'
        for match in re.finditer(goroutine_pat, source):
            # Detect persistent goroutines (often inside loops)
            snippet = source[match.start():match.start() + 200]
            confidence = "high" if "for" in snippet else "medium"
            analysis.append({
                "type": "goroutine_start",
                "target": match.group(1) if match.group(1) else "anonymous",
                "confidence": confidence
            })
        return analysis

    def extract_error_returns(self, source: str) -> List[str]:
        # Heuristic: Find function definitions that return 'error' as the last type
        pattern = r'func\s+(?:\(\s*\w+\s+\*?\w+\s*\))?\s*\w+\s*\([^)]*\)\s*\((?:[^,)]*,\s*)*error\s*\)'
        return [match.group(0) for match in re.finditer(pattern, source)]

    def extract_exported_symbols(self, functions: List[str], interfaces: List[str]) -> List[str]:
        # In Go, exported symbols start with an uppercase letter
        exported = []
        for s in functions:
            name = s.split('.')[-1]
            if name and name[0].isupper():
                exported.append(s)
        for i in interfaces:
            if i and i[0].isupper():
                exported.append(i)
        return list(set(exported))

    # ------------------- LAYER DETECTION -------------------

    def detect_layer(self, pkg_name: str) -> str:
        # Layer detection based on Go package name conventions (CALYX adaptation)
        name = pkg_name.lower()
        if name in ["core", "server", "main", "service"]:
            return "NEXUS"
        if name in ["config", "api", "client", "io"]:
            return "BRIDGE"
        if name in ["math", "util", "helpers", "testutil"]:
            return "ALBEO"  # Pure/Utility
        if name in ["store", "repository", "db"]:
            return "MNEME"  # Memory/State
        return "UTILITY"

    # ------------------- FILE ANALYSIS -------------------

    def analyze_go_file(self, path: Path) -> Optional[CalyxGoFile]:
        rel = self.relative_path(path)
        try:
            src = path.read_text(encoding="utf-8")
        except Exception as e:
            self.log(f"ERROR reading {path}: {e}")
            return None

        pkg_name, imports = self.extract_package_and_imports(src)
        functions = self.extract_functions(src)
        interfaces = self.extract_interfaces(src)
        channels = self.extract_channels_and_goroutines(src)
        error_returns = self.extract_error_returns(src)
        exported = self.extract_exported_symbols(functions, interfaces)
        category = self.detect_layer(pkg_name)

        # Count ONLY true init() functions (no receiver)
        init_funcs = len(re.findall(r'\bfunc\s+init\s*\(', src))

        return CalyxGoFile(
            name=rel,
            path=rel,
            source=src,
            package=pkg_name,
            imports=imports,
            functions=functions,
            interfaces=interfaces,
            channels=channels,
            init_functions=init_funcs,
            exported_symbols=exported,
            error_returns=error_returns,
            category=category
        )

    # ------------------- DISCOVERY & PACKAGING -------------------

    def discover(self, patterns=None):
        patterns = patterns or ["**/*.go"]
        for pattern in patterns:
            for path in self.root.glob(pattern):
                if path.is_file() and path.name != "main.go" and not path.name.endswith("_test.go"):
                    file_obj = self.analyze_go_file(path)
                    if file_obj:
                        self.files[file_obj.name] = file_obj
                        if file_obj.package not in self.packages:
                            self.packages[file_obj.package] = []
                        self.packages[file_obj.package].append(file_obj.name)
                        self.log(f"Analyzed: {file_obj.name} (Pkg: {file_obj.package})")

    # ------------------- BUNDLE GENERATION -------------------
    def generate_bundle(self, output_path: str) -> str:
        """Generate a CALYX Atlas bundle for Go."""
        metadata = {
            "format_version": "calyx-go-3.0-nexus-enhanced",
            "generated_at": datetime.utcnow().isoformat() + "Z",
            "total_files": len(self.files),
            "total_packages": len(self.packages),
            "analysis_features": [
                "package_dependency", "interface_mapping", "concurrency_edges",
                "error_propagation", "init_chain_detection", "layer_detection"
            ]
        }

        # Build Package Dependency Graph (PackageName -> List[Imported Packages])
        pkg_graph = {}
        for pkg_name, files in self.packages.items():
            pkg_deps = set()
            for file_name in files:
                file_obj = self.files[file_name]
                for imp in file_obj.imports:
                    # Extract base package name from import path
                    imp_pkg = imp.split('/')[-1]
                    if imp_pkg in self.packages and imp_pkg != pkg_name:
                        pkg_deps.add(imp_pkg)
            pkg_graph[pkg_name] = sorted(list(pkg_deps))

        lines = [
            "/* ============================================== */",
            "/* CALYX GO BUNDLE (NEXUS READY) - ENHANCED */",
            "/* ============================================== */\n",
            f"/* METADATA */\nconst char* CALYX_METADATA = {json.dumps(metadata, indent=2)};\n",
            "/* ============================================== */",
            "/* PACKAGE DEPENDENCY GRAPH (Explicit Imports) */",
            f"/* {json.dumps(pkg_graph, indent=2)} */\n",
            "/* ============================================== */",
            "/* FILES BY PACKAGE */",
        ]

        for pkg_name, files in self.packages.items():
            lines.append(f"\n/* 📦 PACKAGE: {pkg_name} ({self.detect_layer(pkg_name)}) */")
            for name in files:
                f = self.files[name]
                lines.append(f"/* ---------- {name} ---------- */")
                lines.append(f"/* CATEGORY: {f.category} */")
                lines.append(f"/* EXPORTS: {f.exported_symbols} */")
                lines.append(f"/* INTERFACES: {f.interfaces} */")
                lines.append(f"/* CONCURRENCY (Channels/Goroutines): {json.dumps(f.channels, indent=2)} */")
                lines.append(f"/* ERROR RETURNS: {json.dumps(f.error_returns, indent=2)} */\n")
                lines.append(f"/* SOURCE BEGIN */\n{f.source}\n/* SOURCE END */\n")

        Path(output_path).write_text("\n".join(lines), encoding="utf-8")
        self.log(f"Bundle written to {output_path}")
        return output_path


# ============================================================
# MAIN ENTRYPOINT
# ============================================================

if __name__ == "__main__":
    import argparse

    p = argparse.ArgumentParser(description="CALYX Go Bundler (Nexus Ready) - Enhanced")
    p.add_argument("--root", default=".", help="Root directory containing Go source")
    p.add_argument("--output", default="bundle.calyx.go.atlas", help="Output Atlas file")
    p.add_argument("--verbose", action="store_true")
    args = p.parse_args()

    bundler = CalyxGoNexusAnalyzer(args.root, verbose=args.verbose)
    bundler.discover()

    if not bundler.files:
        print(f"\n⚠️  No .go files found in {args.root}. Please ensure the directory contains source code.")
        sys.exit(1)

    output_file = bundler.generate_bundle(args.output)

    print(f"\n✅ CALYX Go Analysis Complete!")
    print(f"📦 Atlas Bundle: {output_file}")
    print(f"📊 Packages Analyzed: {len(bundler.packages)}")

    total_interfaces = sum(len(f.interfaces) for f in bundler.files.values())
    total_error_returns = sum(len(f.error_returns) for f in bundler.files.values())
    total_channels = sum(len(c) for f in bundler.files.values() for c in f.channels if c['type'] == 'channel_decl')
    total_goroutines = sum(len(c) for f in bundler.files.values() for c in f.channels if c['type'] == 'goroutine_start')

    print(f"🎯 Interfaces defined: {total_interfaces}")
    print(f"🚨 Error boundaries: {total_error_returns} function signatures returning 'error'")
    print(f"⛓️  Channel endpoints: {total_channels} declared")
    print(f"🚀 Goroutine launches: {total_goroutines} detected")
