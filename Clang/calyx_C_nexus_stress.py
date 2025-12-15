#!/usr/bin/env python3
"""
CALYX-OPTIMIZED C BUNDLER (NEXUS-READY) - ENHANCED

Bundles C source files into a single deterministic Atlas for LLM consumption.

New Nexus features:
- Conditional block extraction (#ifdef/#endif)
- Function pointer detection (fields + assignments + signatures)
- Cast extraction (UB-risk mapping)
- Callback extraction (async edge graph with confidence scoring)
- Macro table detection (X-macro language + chains)
- Visualization output (Graphviz DOT)
"""

import json, re, sys, subprocess
from pathlib import Path
from typing import Dict, List, Optional, Tuple
from dataclasses import dataclass, field
from datetime import datetime


# ============================================================
# DATA CLASSES
# ============================================================

@dataclass
class CalyxCFile:
    name: str
    path: str
    source: str
    includes: List[str]
    defines: List[str]
    functions: List[str]
    dependencies: List[str]
    category: str
    header: Optional[str] = None
    conditional_blocks: List[dict] = field(default_factory=list)
    function_pointers: dict = field(default_factory=dict)
    casts: List[dict] = field(default_factory=list)
    callbacks: List[dict] = field(default_factory=list)
    macro_tables: List[str] = field(default_factory=list)
    function_pointer_signatures: List[tuple] = field(default_factory=list)
    macro_chains: List[dict] = field(default_factory=list)


# ============================================================
# MAIN CLASS
# ============================================================

class CalyxCBundler:
    def __init__(self, root=".", verbose=False):
        self.root = Path(root)
        self.verbose = verbose
        self.files: Dict[str, CalyxCFile] = {}
        self.headers: Dict[str, str] = {}

    # ------------------- UTILITIES -------------------
    def log(self, msg: str):
        if self.verbose:
            print(f"[CALYX-C] {msg}")

    def normalize_path(self, path: Path) -> str:
        return str(path).replace("\\", "/")

    def relative_path(self, full_path: Path) -> str:
        try:
            return self.normalize_path(full_path.relative_to(self.root))
        except ValueError:
            return self.normalize_path(full_path)

    # ------------------- ENHANCED EXTRACTORS -------------------

    def extract_includes(self, source: str) -> List[str]:
        pattern = r'^\s*#\s*include\s*([<"][^>"]+[>"])'
        return [m.group(1).strip('<>"') for m in re.finditer(pattern, source, re.MULTILINE)]

    def extract_defines(self, source: str) -> List[str]:
        pattern = r'^\s*#\s*define\s+([A-Za-z_][A-Za-z0-9_]*)(?:\s*\([^)]*\))?'
        return [m.group(1) for m in re.finditer(pattern, source, re.MULTILINE)]

    def extract_functions(self, source: str) -> List[str]:
        def remove_comments(text):
            text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)
            return re.sub(r'//.*$', '', text, flags=re.MULTILINE)

        clean = remove_comments(source)
        pattern = r'^\s*(?:[a-zA-Z_][a-zA-Z0-9_]*\s+)+\*?\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^;{]*\)\s*\{'
        return [m.group(1) for m in re.finditer(pattern, clean, re.MULTILINE)]

    def extract_conditional_blocks(self, source: str) -> List[dict]:
        blocks, stack, lines = [], [], source.splitlines()
        for i, line in enumerate(lines):
            if line.strip().startswith(("#if", "#ifdef", "#ifndef")):
                stack.append((i, line.strip()))
            elif line.strip().startswith("#endif") and stack:
                start_i, start_cond = stack.pop()
                blocks.append({
                    "condition": start_cond, 
                    "start_line": start_i + 1, 
                    "end_line": i + 1,
                    "length": i - start_i
                })
        return blocks

    def extract_function_pointers(self, source: str) -> dict:
        field_pat = r'(\w+_cb|\w+_fn|\w+)\s*\*\s*(\w+);'
        assign_pat = r'(\w+)->(\w+)\s*=\s*(\w+);'
        fields = [m.group(2) for m in re.finditer(field_pat, source)]
        assigns = [
            {
                "struct": m.group(1), 
                "field": m.group(2), 
                "target": m.group(3)
            } for m in re.finditer(assign_pat, source)
        ]
        return {"fields": list(set(fields)), "assignments": assigns}

    def extract_function_pointer_signatures(self, source: str) -> List[tuple]:
        """Extract function pointer typedefs for better type safety analysis."""
        patterns = [
            # typedef void (*uv_close_cb)(uv_handle_t* handle);
            r'typedef\s+(\w+(?:\s+\w+)*)\s*\(\s*\*\s*(\w+)\s*\)\s*\(([^)]*)\)\s*;',
            # uv_close_cb close_cb;
            r'(\w+)\s+(\w+)\s*;'
        ]
        signatures = []
        for pattern in patterns:
            for match in re.finditer(pattern, source):
                signatures.append(match.groups())
        return signatures

    def extract_casts(self, source: str) -> List[dict]:
        pat = r'\((\w+_t\s*\*)\)\s*(\w+)'
        return [
            {
                "to": m.group(1).strip(), 
                "expr": m.group(2),
                "risk": "high" if "void" in m.group(1).lower() else "medium"
            } for m in re.finditer(pat, source)
        ]

    def extract_callbacks(self, source: str) -> List[dict]:
        callbacks = []

        # ----------------------------------------
        # Heuristic 1: Callback-like argument names
        # ----------------------------------------
        suffix_pattern = r'(\w+)\s*\([^)]*?(\w+_(?:cb|handler|fn|func))[^)]*\)'
        for match in re.finditer(suffix_pattern, source):
            callbacks.append({
                "caller": match.group(1),
                "callback": match.group(2),
                "type": "suffix_match",
                "confidence": "low"
            })

        # ----------------------------------------
        # Heuristic 2: Assignment to function pointers
        # ----------------------------------------
        assign_pattern = r'(\w+)->(\w+)\s*=\s*(\w+);'
        for match in re.finditer(assign_pattern, source):
            field = match.group(2)
            if any(suffix in field for suffix in ['cb', 'handler', 'fn', 'func']):
                callbacks.append({
                    "caller": "assignment",
                    "struct": match.group(1),
                    "field": field,
                    "callback": match.group(3),
                    "type": "pointer_assignment",
                    "confidence": "medium"
                })

        # ----------------------------------------
        # Heuristic 3: Direct function pointer calls
        # ----------------------------------------
        call_pattern = r'(?:\(\*\s*(\w+)\)|(\w+))\s*\([^)]*\)(?![^{]*;)'
        for match in re.finditer(call_pattern, source):
            callback_name = match.group(1) or match.group(2)

            # Avoid obvious control structures
            if callback_name in {'if', 'while', 'for', 'switch', 'return', 'sizeof'}:
                continue

            # Capture minimal context for human/LLM inspection
            lines = source[:match.start()].splitlines()
            context = lines[-1].strip() if lines else ""

            callbacks.append({
                "caller_context": context[:80],
                "callback": callback_name,
                "type": "direct_call",
                "confidence": "very_low"
            })

        return callbacks

    def detect_macro_tables(self, source: str) -> List[str]:
        pat = r'#define\s+(\w+)\(XX\)'
        return [m.group(1) for m in re.finditer(pat, source)]

    def extract_macro_chains(self, source: str) -> List[dict]:
        """Find macro-to-macro dependencies (common in X-macro patterns)."""
        # Pattern: #define FOO() BAR()
        pattern = r'#define\s+(\w+)\([^)]*\)\s*(\w+)\([^)]*\)'
        chains = []
        for match in re.finditer(pattern, source):
            chains.append({
                "macro": match.group(1),
                "expands_to": match.group(2),
                "type": "macro_chain"
            })
        
        # Also detect multi-level expansions
        nested_pattern = r'#define\s+(\w+)\([^)]*\)\s*(\w+)\(\w+\)\s*(\w+)'
        for match in re.finditer(nested_pattern, source):
            chains.append({
                "macro": match.group(1),
                "expands_to": match.group(2),
                "nested": match.group(3),
                "type": "nested_macro_chain"
            })
        
        return chains

    # ------------------- LAYER DETECTION -------------------

    def detect_layer(self, rel_path: str) -> str:
        parts = rel_path.split("/")
        if parts:
            first = parts[0].lower()
            if first == "nexus": return "NEXUS"
            if first == "albeo": return "ALBEO"
            if first in ["bridge", "kern"]: return "BRIDGE"
            if first == "fsm": return "FSM"
            if first == "mneme": return "MNEME"
        return "UTILITY"

    # ------------------- FILE ANALYSIS -------------------

    def analyze_c_file(self, path: Path) -> Optional[CalyxCFile]:
        rel = self.relative_path(path)
        try:
            src = path.read_text(encoding="utf-8", errors="ignore")
        except Exception as e:
            self.log(f"ERROR reading {path}: {e}")
            return None

        includes = self.extract_includes(src)
        defines = self.extract_defines(src)
        functions = self.extract_functions(src)
        conds = self.extract_conditional_blocks(src)
        fp = self.extract_function_pointers(src)
        fp_sigs = self.extract_function_pointer_signatures(src)
        casts = self.extract_casts(src)
        callbacks = self.extract_callbacks(src)
        macros = self.detect_macro_tables(src)
        macro_chains = self.extract_macro_chains(src)
        category = self.detect_layer(rel)

        header_path = path.with_suffix(".h")
        header_name = None
        if header_path.exists():
            try:
                self.headers[self.relative_path(header_path)] = header_path.read_text(encoding="utf-8", errors="ignore")
                header_name = header_path.name
            except Exception as e:
                self.log(f"ERROR reading header {header_path}: {e}")

        return CalyxCFile(
            name=rel,
            path=rel,
            source=src,
            includes=includes,
            defines=defines,
            functions=functions,
            dependencies=[],
            category=category,
            header=header_name,
            conditional_blocks=conds,
            function_pointers=fp,
            casts=casts,
            callbacks=callbacks,
            macro_tables=macros,
            function_pointer_signatures=fp_sigs,
            macro_chains=macro_chains
        )

    # ------------------- DISCOVERY -------------------

    def discover(self, patterns=None):
        patterns = patterns or ["**/*.c", "**/*.h"]
        for pattern in patterns:
            for path in self.root.glob(pattern):
                if path.is_file():
                    file_obj = self.analyze_c_file(path)
                    if file_obj:
                        self.files[file_obj.name] = file_obj
                        self.log(f"Analyzed: {file_obj.name}")

    # ------------------- DEPENDENCY GRAPH -------------------

    def build_dependency_graph(self) -> Dict[str, List[str]]:
        graph = {}
        for name, file_obj in self.files.items():
            deps = []
            for inc in file_obj.includes:
                for other in self.files:
                    if inc == Path(other).name or other.endswith(f"/{inc}"):
                        deps.append(other)
                        break
            graph[name] = deps
        return graph

    # ------------------- VISUALIZATION -------------------

    def generate_callback_graph(self, output_path: str = "callback_graph.dot") -> str:
        """Generate Graphviz DOT file of callback relationships."""
        dot_lines = [
            "digraph CallbackGraph {",
            "  rankdir=LR;",
            "  node [shape=box, style=filled];",
            "  edge [color=gray];"
        ]
        
        # Color by confidence
        confidence_colors = {
            "medium": "orange",
            "low": "yellow",
            "very_low": "lightgray"
        }
        
        for file_name, file_obj in self.files.items():
            for cb in file_obj.callbacks:
                confidence = cb.get("confidence", "very_low")
                caller = cb.get("caller", "unknown")
                callback = cb.get("callback", "unknown")
                
                # Create unique node IDs
                caller_id = re.sub(r'\W+', '_', caller)
                callback_id = re.sub(r'\W+', '_', callback)
                
                # Add nodes with colors
                if caller != "unknown":
                    dot_lines.append(f'  "{caller_id}" [label="{caller}", fillcolor="{confidence_colors.get(confidence, "white")}"];')
                if callback != "unknown":
                    dot_lines.append(f'  "{callback_id}" [label="{callback}", fillcolor="{confidence_colors.get(confidence, "white")}"];')
                
                # Add edge
                if caller != "unknown" and callback != "unknown":
                    dot_lines.append(f'  "{caller_id}" -> "{callback_id}" [label="{cb.get("type")}"];')
    
        dot_lines.append("}")
        
        Path(output_path).write_text("\n".join(dot_lines), encoding="utf-8")
        self.log(f"Callback graph written to {output_path}")
        
        # Try to generate PNG if Graphviz is installed
        try:
            subprocess.run(["dot", "-Tpng", output_path, "-o", output_path.replace(".dot", ".png")], 
                         check=False, capture_output=True)
            self.log(f"PNG visualization generated: {output_path.replace('.dot', '.png')}")
        except:
            self.log("Graphviz not installed. Install with: sudo apt-get install graphviz")
        
        return output_path

    # ------------------- BUNDLE GENERATION -------------------
    def generate_bundle(self, output_path: str) -> str:
        """Generate a CALYX Atlas bundle without visualization."""
        metadata = {
            "format_version": "calyx-c-3.0-nexus-enhanced",
            "generated_at": datetime.utcnow().isoformat() + "Z",
            "total_files": len(self.files),
            "analysis_features": [
                "conditional_blocks", "function_pointers", "casts", 
                "callbacks", "macro_tables", "function_pointer_signatures",
                "macro_chains", "dependency_graph", "layer_detection"
            ]
        }

        graph = self.build_dependency_graph()
        lines = [
            "/* ============================================== */",
            "/* CALYX C BUNDLE (NEXUS READY) - ENHANCED */",
            "/* ============================================== */\n",
            f"/* METADATA */\nconst char* CALYX_METADATA = {json.dumps(metadata, indent=2)};\n",
            "/* ============================================== */",
            "/* DEPENDENCY GRAPH */",
            f"/* {json.dumps(graph, indent=2)} */\n",
            "/* ============================================== */",
            "/* FILES */",
        ]

        for name, f in self.files.items():
            lines.append(f"/* ---------- {name} ---------- */")
            lines.append(f"/* LAYER: {f.category} */")
            lines.append(f"/* INCLUDES: {f.includes} */")
            lines.append(f"/* FUNCTIONS: {f.functions} */")
            lines.append(f"/* CONDITIONALS: {json.dumps(f.conditional_blocks, indent=2)} */")
            lines.append(f"/* FUNCTION_POINTERS: {json.dumps(f.function_pointers, indent=2)} */")
            lines.append(f"/* FUNCTION_POINTER_SIGNATURES: {json.dumps(f.function_pointer_signatures, indent=2)} */")
            lines.append(f"/* CASTS: {json.dumps(f.casts, indent=2)} */")
            lines.append(f"/* CALLBACKS: {json.dumps(f.callbacks, indent=2)} */")
            lines.append(f"/* MACRO_TABLES: {json.dumps(f.macro_tables, indent=2)} */")
            lines.append(f"/* MACRO_CHAINS: {json.dumps(f.macro_chains, indent=2)} */\n")
            lines.append(f"/* SOURCE BEGIN */\n{f.source}\n/* SOURCE END */\n")

        Path(output_path).write_text("\n".join(lines), encoding="utf-8")
        self.log(f"Bundle written to {output_path}")
        return output_path

     
# ============================================================
# MAIN ENTRYPOINT
# ============================================================

if __name__ == "__main__":
    import argparse

    p = argparse.ArgumentParser(description="CALYX C Bundler (Nexus Ready) - Enhanced")
    p.add_argument("--root", default=".", help="Root directory")
    p.add_argument("--output", default="bundle.calyx.c", help="Output file")
    p.add_argument("--verbose", action="store_true")
    args = p.parse_args()

    bundler = CalyxCBundler(args.root, verbose=args.verbose)
    bundler.discover()
    output_file = bundler.generate_bundle(args.output)

    print(f"\n✅ CALYX Analysis Complete!")
    print(f"📦 Bundle: {output_file}")
    print(f"📊 Files Analyzed: {len(bundler.files)}")

    total_callbacks = sum(len(f.callbacks) for f in bundler.files.values())
    total_casts = sum(len(f.casts) for f in bundler.files.values())
    total_conditionals = sum(len(f.conditional_blocks) for f in bundler.files.values())

    print(f"🎯 Callbacks detected: {total_callbacks}")
    print(f"⚠️  Casts detected: {total_casts}")
    print(f"🔀 Conditional blocks: {total_conditionals}")

