#!/usr/bin/env node
/**
 * CALYX-OPTIMIZED TYPESCRIPT/JAVASCRIPT BUNDLER
 * 
 * Bundles TypeScript/JavaScript modules into a single file FOR LLM CONSUMPTION.
 * Special handling for:
 * - ES Modules vs CommonJS
 * - TypeScript types and interfaces
 * - Module resolution (.ts, .tsx, .js, .jsx, .mjs, .cjs)
 * - Package.json dependencies
 * 
 * USAGE:
 *   npx tsx calyx_bundle.ts --output bundle.calyx.js
 *   # Then in ChatGPT/Claude: "Here's my bundled TypeScript project..."
 */

import fs from 'fs';
import path from 'path';
import { fileURLToPath } from 'url';
import { glob } from 'glob';
import * as ts from 'typescript';
import { parse } from '@babel/parser';
import traverse from '@babel/traverse';
import * as t from '@babel/types';

// ============================================================================
// TYPES
// ============================================================================

interface CalyxModule {
  name: string;                     // "@app/components/Button"
  path: string;                     // "src/components/Button.tsx"
  source: string;                   // Original source (preserved exactly)
  imports: ImportSpec[];            // All imports with types
  exports: ExportSpec[];            // What this module exports
  dependencies: string[];           // Internal dependencies only
  category: string;                 // "UI", "API", "UTILS", etc.
  hasTypes: boolean;                // TypeScript file
  isReact: boolean;                 // React component
  packageExports?: string[];        // From package.json exports
}

interface ImportSpec {
  source: string;                   // "./utils" or "react"
  specifiers: ImportSpecifier[];    // {name: "Component", alias?: "Comp"}
  isTypeOnly: boolean;              // import type
  isDefault: boolean;               // import React from "react"
}

interface ImportSpecifier {
  name: string;                     // "useState"
  alias?: string;                   // "useState as state"
  isType?: boolean;                 // TypeScript type import
}

interface ExportSpec {
  name: string;                     // "Button" or "default"
  type: 'named' | 'default' | 'namespace' | 'type';
  isTypeOnly?: boolean;             // export type { Props }
  value?: any;                      // For default exports with values
}

interface CalyxMetadata {
  format_version: string;
  total_modules: number;
  layers: Record<string, number>;
  external_deps: Set<string>;
  package_deps: Record<string, string>;
  tsconfig?: any;
  generated_at: string;
}

// ============================================================================
// MAIN CLASS
// ============================================================================

class CalyxTSBundler {
  private root: string;
  private verbose: boolean;
  private modules: Map<string, CalyxModule>;
  private tsConfig: any;
  private packageJson: any;

  constructor(root: string = '.', verbose: boolean = false) {
    this.root = path.resolve(root);
    this.verbose = verbose;
    this.modules = new Map();
    this.tsConfig = this.loadTSConfig();
    this.packageJson = this.loadPackageJson();
  }

  private log(msg: string): void {
    if (this.verbose) {
      console.log(`[CALYX-TS] ${msg}`);
    }
  }

  private loadTSConfig(): any {
    const tsConfigPath = path.join(this.root, 'tsconfig.json');
    if (fs.existsSync(tsConfigPath)) {
      try {
        const content = fs.readFileSync(tsConfigPath, 'utf-8');
        return JSON.parse(content);
      } catch (e) {
        this.log(`Failed to parse tsconfig.json: ${e}`);
      }
    }
    return null;
  }

  private loadPackageJson(): any {
    const packagePath = path.join(this.root, 'package.json');
    if (fs.existsSync(packagePath)) {
      try {
        const content = fs.readFileSync(packagePath, 'utf-8');
        return JSON.parse(content);
      } catch (e) {
        this.log(`Failed to parse package.json: ${e}`);
      }
    }
    return null;
  }

  private detectCategory(filePath: string): string {
    const relPath = path.relative(this.root, filePath);
    const parts = relPath.split(path.sep);
    
    if (parts.length > 0) {
      const first = parts[0].toLowerCase();
      const second = parts[1]?.toLowerCase();
      
      // React/UI detection
      if (first.includes('component') || first.includes('ui')) return 'UI';
      if (second?.includes('component') || relPath.includes('.tsx')) return 'UI';
      
      // API/Server detection
      if (first.includes('api') || first.includes('server')) return 'API';
      if (first.includes('route') || first.includes('endpoint')) return 'API';
      
      // State management
      if (first.includes('store') || first.includes('state')) return 'STATE';
      
      // Utils/Helpers
      if (first.includes('util') || first.includes('helper')) return 'UTILS';
      
      // Hooks
      if (first.includes('hook')) return 'HOOKS';
      
      // Types
      if (first.includes('type') || first.includes('interface')) return 'TYPES';
      
      // Tests
      if (first.includes('test') || first.includes('spec')) return 'TESTS';
    }
    
    return 'CORE';
  }

  private parseImports(source: string, filePath: string): ImportSpec[] {
    const imports: ImportSpec[] = [];
    
    try {
      const ast = parse(source, {
        sourceType: 'module',
        plugins: [
          'typescript',
          'jsx',
          'decorators-legacy',
          'classProperties'
        ]
      });

      traverse(ast, {
        ImportDeclaration(path) {
          const importSpec: ImportSpec = {
            source: path.node.source.value,
            specifiers: [],
            isTypeOnly: path.node.importKind === 'type',
            isDefault: false
          };

          path.node.specifiers.forEach(spec => {
            if (t.isImportDefaultSpecifier(spec)) {
              importSpec.specifiers.push({ name: 'default', alias: spec.local.name });
              importSpec.isDefault = true;
            } else if (t.isImportSpecifier(spec)) {
              const name = t.isStringLiteral(spec.imported) 
                ? spec.imported.value 
                : spec.imported.name;
              importSpec.specifiers.push({
                name,
                alias: spec.local.name !== name ? spec.local.name : undefined,
                isType: path.node.importKind === 'type'
              });
            } else if (t.isImportNamespaceSpecifier(spec)) {
              importSpec.specifiers.push({ 
                name: '*', 
                alias: spec.local.name 
              });
            }
          });

          imports.push(importSpec);
        }
      });
    } catch (error) {
      this.log(`Failed to parse imports for ${filePath}: ${error}`);
    }

    return imports;
  }

  private parseExports(source: string, filePath: string): ExportSpec[] {
    const exports: ExportSpec[] = [];
    
    try {
      const ast = parse(source, {
        sourceType: 'module',
        plugins: [
          'typescript',
          'jsx',
          'decorators-legacy',
          'classProperties'
        ]
      });

      traverse(ast, {
        ExportNamedDeclaration(path) {
          if (path.node.declaration) {
            // export function/class/const
            if (t.isFunctionDeclaration(path.node.declaration)) {
              exports.push({
                name: path.node.declaration.id?.name || 'anonymous',
                type: 'named'
              });
            } else if (t.isClassDeclaration(path.node.declaration)) {
              exports.push({
                name: path.node.declaration.id?.name || 'anonymous',
                type: 'named'
              });
            } else if (t.isVariableDeclaration(path.node.declaration)) {
              path.node.declaration.declarations.forEach(decl => {
                if (t.isIdentifier(decl.id)) {
                  exports.push({ name: decl.id.name, type: 'named' });
                }
              });
            } else if (t.isTSInterfaceDeclaration(path.node.declaration)) {
              exports.push({
                name: path.node.declaration.id.name,
                type: 'type',
                isTypeOnly: true
              });
            } else if (t.isTSTypeAliasDeclaration(path.node.declaration)) {
              exports.push({
                name: path.node.declaration.id.name,
                type: 'type',
                isTypeOnly: true
              });
            }
          }

          // export { x, y } from './module'
          if (path.node.specifiers && path.node.source) {
            path.node.specifiers.forEach(spec => {
              if (t.isExportSpecifier(spec)) {
                const name = t.isStringLiteral(spec.exported) 
                  ? spec.exported.value 
                  : spec.exported.name;
                const local = t.isStringLiteral(spec.local) 
                  ? spec.local.value 
                  : spec.local.name;
                
                exports.push({
                  name,
                  type: 'named',
                  isTypeOnly: path.node.exportKind === 'type'
                });
              }
            });
          }
        },

        ExportDefaultDeclaration(path) {
          let name = 'default';
          if (t.isIdentifier(path.node.declaration)) {
            name = path.node.declaration.name;
          } else if (t.isFunctionDeclaration(path.node.declaration) && path.node.declaration.id) {
            name = path.node.declaration.id.name;
          } else if (t.isClassDeclaration(path.node.declaration) && path.node.declaration.id) {
            name = path.node.declaration.id.name;
          }
          
          exports.push({ name, type: 'default' });
        },

        ExportAllDeclaration(path) {
          exports.push({ 
            name: '*', 
            type: 'namespace',
            isTypeOnly: path.node.exportKind === 'type'
          });
        }
      });
    } catch (error) {
      this.log(`Failed to parse exports for ${filePath}: ${error}`);
    }

    return exports;
  }

  private analyzeModule(filePath: string): CalyxModule | null {
    try {
      const source = fs.readFileSync(filePath, 'utf-8');
      const relPath = path.relative(this.root, filePath);
      
      // Generate module name
      let moduleName = relPath
        .replace(/\.(ts|tsx|js|jsx|mjs|cjs)$/, '')
        .replace(/\\/g, '/');
      
      // Handle index files
      if (moduleName.endsWith('/index')) {
        moduleName = moduleName.slice(0, -6);
      }
      
      // Convert to package-like name
      if (moduleName.startsWith('src/')) {
        moduleName = `@app/${moduleName.slice(4)}`;
      }

      const imports = this.parseImports(source, filePath);
      const exports = this.parseExports(source, filePath);
      const category = this.detectCategory(filePath);
      const hasTypes = filePath.endsWith('.ts') || filePath.endsWith('.tsx');
      const isReact = filePath.endsWith('.tsx') || filePath.endsWith('.jsx') || 
                     source.includes('React') || source.includes('createElement');

      // Determine internal dependencies
      const dependencies = imports
        .filter(imp => {
          // Check if import is internal (starts with . or @app/)
          return imp.source.startsWith('.') || imp.source.startsWith('@app/');
        })
        .map(imp => {
          // Resolve relative paths to module names
          if (imp.source.startsWith('.')) {
            const resolved = path.resolve(path.dirname(filePath), imp.source);
            const relative = path.relative(this.root, resolved);
            return relative
              .replace(/\.(ts|tsx|js|jsx|mjs|cjs)$/, '')
              .replace(/\\/g, '/');
          }
          return imp.source;
        });

      return {
        name: moduleName,
        path: relPath,
        source,
        imports,
        exports,
        dependencies: [...new Set(dependencies)], // Remove duplicates
        category,
        hasTypes,
        isReact
      };
    } catch (error) {
      this.log(`Failed to analyze ${filePath}: ${error}`);
      return null;
    }
  }

  public async discover(patterns: string[] = ['**/*.{ts,tsx,js,jsx,mjs,cjs}']): Promise<void> {
    const excludedDirs = new Set([
      'node_modules',
      '.git',
      '.next',
      'dist',
      'build',
      '.turbo',
      '.cache',
      '__tests__',
      '__mocks__',
      'coverage'
    ]);

    for (const pattern of patterns) {
      const files = await glob(pattern, {
        cwd: this.root,
        ignore: ['**/node_modules/**', '**/dist/**', '**/build/**'],
        absolute: true
      });

      for (const filePath of files) {
        // Skip excluded directories
        const relPath = path.relative(this.root, filePath);
        const parts = relPath.split(path.sep);
        if (parts.some(part => excludedDirs.has(part))) {
          continue;
        }

        // Skip test files unless explicitly included
        if (filePath.includes('.test.') || filePath.includes('.spec.')) {
          continue;
        }

        const module = this.analyzeModule(filePath);
        if (module) {
          this.modules.set(module.name, module);
          this.log(`Analyzed: ${module.name} (${module.category})`);
        }
      }
    }
  }

  private buildDependencyGraph(): Map<string, string[]> {
    const graph = new Map<string, string[]>();

    for (const [name, module] of this.modules) {
      const deps = new Set<string>();
      
      for (const dep of module.dependencies) {
        // Try to find the dependency in our modules
        let found = false;
        
        // Exact match
        if (this.modules.has(dep)) {
          deps.add(dep);
          found = true;
        }
        
        // Try with @app/ prefix
        if (!found && !dep.startsWith('@app/') && this.modules.has(`@app/${dep}`)) {
          deps.add(`@app/${dep}`);
          found = true;
        }
        
        // Try removing @app/ prefix
        if (!found && dep.startsWith('@app/') && this.modules.has(dep.slice(5))) {
          deps.add(dep.slice(5));
          found = true;
        }
        
        // Try index resolution
        if (!found && this.modules.has(`${dep}/index`)) {
          deps.add(`${dep}/index`);
        }
      }
      
      graph.set(name, Array.from(deps));
    }

    // Topological sort
    const visited = new Set<string>();
    const temp = new Set<string>();
    const sorted: string[] = [];

    const visit = (node: string) => {
      if (temp.has(node)) {
        this.log(`WARNING: Circular dependency detected: ${node}`);
        return;
      }
      if (visited.has(node)) return;

      temp.add(node);
      for (const dep of graph.get(node) || []) {
        if (this.modules.has(dep)) {
          visit(dep);
        }
      }
      temp.delete(node);
      visited.add(node);
      sorted.push(node);
    };

    for (const node of this.modules.keys()) {
      if (!visited.has(node)) {
        visit(node);
      }
    }

    // Reorder modules
    const sortedModules = new Map<string, CalyxModule>();
    for (const name of sorted) {
      const module = this.modules.get(name);
      if (module) {
        sortedModules.set(name, module);
      }
    }
    this.modules = sortedModules;

    return graph;
  }

  public generateBundle(outputPath: string): string {
    // Build metadata
    const metadata: CalyxMetadata = {
      format_version: 'calyx-ts-1.0',
      total_modules: this.modules.size,
      layers: {},
      external_deps: new Set<string>(),
      package_deps: this.packageJson?.dependencies || {},
      tsconfig: this.tsConfig,
      generated_at: new Date().toISOString()
    };

    // Count by layer and collect external dependencies
    for (const module of this.modules.values()) {
      metadata.layers[module.category] = (metadata.layers[module.category] || 0) + 1;
      
      for (const imp of module.imports) {
        // Check if this is external
        const isExternal = !imp.source.startsWith('.') && 
                          !imp.source.startsWith('@app/') &&
                          !this.modules.has(imp.source);
        
        if (isExternal) {
          metadata.external_deps.add(imp.source);
        }
      }
    }

    // Build dependency graph
    const graph = this.buildDependencyGraph();

    // Generate bundle content
    const lines: string[] = [];

    // ==================== SECTION 1: METADATA ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// CALYX TYPESCRIPT BUNDLE - LLM OPTIMIZED FORMAT');
    lines.push('// ' + '='.repeat(70));
    lines.push('');
    lines.push(`export const CALYX_METADATA = ${JSON.stringify({
      ...metadata,
      external_deps: Array.from(metadata.external_deps).sort()
    }, null, 2)};`);
    lines.push('');

    // ==================== SECTION 2: MODULE MAP ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// MODULE MAP (name → metadata)');
    lines.push('// ' + '='.repeat(70));
    lines.push('export const MODULE_MAP = {');
    for (const [name, module] of this.modules) {
      lines.push(`  '${name}': {`);
      lines.push(`    path: '${module.path}',`);
      lines.push(`    layer: '${module.category}',`);
      lines.push(`    hasTypes: ${module.hasTypes},`);
      lines.push(`    isReact: ${module.isReact},`);
      lines.push(`    exports: ${JSON.stringify(module.exports.map(e => e.name))},`);
      lines.push(`  },`);
    }
    lines.push('};');
    lines.push('');

    // ==================== SECTION 3: DEPENDENCY GRAPH ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// DEPENDENCY GRAPH (module → [dependencies])');
    lines.push('// ' + '='.repeat(70));
    lines.push('export const DEPENDENCY_GRAPH = {');
    for (const [name, deps] of graph) {
      lines.push(`  '${name}': ${JSON.stringify(deps)},`);
    }
    lines.push('};');
    lines.push('');

    // ==================== SECTION 4: MODULE CONTENTS ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// MODULE CONTENTS (PRESERVED EXACTLY)');
    lines.push('// ' + '='.repeat(70));
    lines.push('export const MODULE_CONTENTS = {');
    for (const [name, module] of this.modules) {
      lines.push(`  // ${'-'.repeat(60)}`);
      lines.push(`  // MODULE: ${name}`);
      lines.push(`  // LAYER: ${module.category}`);
      lines.push(`  // PATH: ${module.path}`);
      lines.push(`  // ${'-'.repeat(60)}`);
      lines.push(`  '${name}': \`${this.escapeTemplateLiteral(module.source)}\`,`);
      lines.push('');
    }
    lines.push('};');
    lines.push('');

    // ==================== SECTION 5: PUBLIC API ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// PUBLIC API (what to expose)');
    lines.push('// ' + '='.repeat(70));
    lines.push('');
    lines.push('/**');
    lines.push(' * Retrieve module source by name');
    lines.push(' */');
    lines.push('export function getModule(name: string): string {');
    lines.push('  return MODULE_CONTENTS[name as keyof typeof MODULE_CONTENTS] || "";');
    lines.push('}');
    lines.push('');
    lines.push('/**');
    lines.push(' * List modules, optionally filtered by layer');
    lines.push(' */');
    lines.push('export function listModules(layer?: string): string[] {');
    lines.push('  if (layer) {');
    lines.push('    return Object.entries(MODULE_MAP)');
    lines.push('      .filter(([_, meta]) => meta.layer === layer)');
    lines.push('      .map(([name]) => name);');
    lines.push('  }');
    lines.push('  return Object.keys(MODULE_CONTENTS);');
    lines.push('}');
    lines.push('');
    lines.push('/**');
    lines.push(' * Get module dependencies');
    lines.push(' */');
    lines.push('export function getDependencies(name: string): string[] {');
    lines.push('  return DEPENDENCY_GRAPH[name as keyof typeof DEPENDENCY_GRAPH] || [];');
    lines.push('}');
    lines.push('');
    lines.push('/**');
    lines.push(' * Get statistics by layer');
    lines.push(' */');
    lines.push('export function getLayerStats(): Record<string, number> {');
    lines.push('  return CALYX_METADATA.layers;');
    lines.push('}');
    lines.push('');
    lines.push('/**');
    lines.push(' * Get external dependencies');
    lines.push(' */');
    lines.push('export function getExternalDeps(): string[] {');
    lines.push('  return CALYX_METADATA.external_deps;');
    lines.push('}');
    lines.push('');
    lines.push('/**');
    lines.push(' * Get package.json dependencies');
    lines.push(' */');
    lines.push('export function getPackageDeps(): Record<string, string> {');
    lines.push('  return CALYX_METADATA.package_deps;');
    lines.push('}');
    lines.push('');

    // ==================== SECTION 6: IMPORT SHIM ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// RUNTIME SHIM (for Node.js execution)');
    lines.push('// ' + '='.repeat(70));
    lines.push('if (typeof require !== "undefined" && require.cache) {');
    lines.push('  // Only create packages that exist in our bundle');
    lines.push('  const packages = new Set(');
    lines.push('    Object.keys(MODULE_CONTENTS)');
    lines.push('      .map(name => name.split(".")[0])');
    lines.push('      .filter(Boolean)');
    lines.push('  );');
    lines.push('');
    lines.push('  for (const pkg of packages) {');
    lines.push('    // Create package in require.cache');
    lines.push('    const pkgName = `calyx.${pkg}`;');
    lines.push('    const pkgModule = { exports: {} };');
    lines.push('    require.cache[pkgName] = pkgModule;');
    lines.push('');
    lines.push('    // Add submodules');
    lines.push('    for (const [fullName, content] of Object.entries(MODULE_CONTENTS)) {');
    lines.push('      if (fullName.startsWith(`${pkg}.`)) {');
    lines.push('        const subName = fullName.slice(pkg.length + 1);');
    lines.push('        const subFull = `${pkgName}.${subName}`;');
    lines.push('');
    lines.push('        // Execute module in its own context');
    lines.push('        const module = { exports: {} };');
    lines.push('        const wrapper = `(function(exports, module) {');
    lines.push('          ${content.replace(/\\\\/g, "\\\\\\\\").replace(/`/g, "\\\\`")}');
    lines.push('        })`;');
    lines.push('        try {');
    lines.push('          eval(wrapper)(module.exports, module);');
    lines.push('          require.cache[subFull] = { exports: module.exports };');
    lines.push('          pkgModule.exports[subName] = module.exports;');
    lines.push('        } catch (error) {');
    lines.push('          console.error(`Failed to load ${subFull}:`, error);');
    lines.push('        }');
    lines.push('      }');
    lines.push('    }');
    lines.push('  }');
    lines.push('}');
    lines.push('');

    // ==================== SECTION 7: TYPE DECLARATIONS ====================
    if (this.hasTypeScriptFiles()) {
      lines.push('// ' + '='.repeat(70));
      lines.push('// TYPE DECLARATIONS (for TypeScript awareness)');
      lines.push('// ' + '='.repeat(70));
      lines.push('declare global {');
      lines.push('  namespace Calyx {');
      lines.push('    interface ModuleMetadata {');
      lines.push('      path: string;');
      lines.push('      layer: string;');
      lines.push('      hasTypes: boolean;');
      lines.push('      isReact: boolean;');
      lines.push('      exports: string[];');
      lines.push('    }');
      lines.push('');
      lines.push('    interface Atlas {');
      lines.push('      metadata: typeof CALYX_METADATA;');
      lines.push('      modules: typeof MODULE_MAP;');
      lines.push('      dependencies: typeof DEPENDENCY_GRAPH;');
      lines.push('    }');
      lines.push('  }');
      lines.push('}');
      lines.push('');
    }

    // ==================== SECTION 8: MAIN ENTRY ====================
    lines.push('// ' + '='.repeat(70));
    lines.push('// MAIN ENTRY POINT (if run as script)');
    lines.push('// ' + '='.repeat(70));
    lines.push('if (typeof module !== "undefined" && require.main === module) {');
    lines.push('  console.log("CALYX TypeScript Bundle Loaded");');
    lines.push('  console.log(`Modules: ${Object.keys(MODULE_CONTENTS).length}`);');
    lines.push('  console.log(`Layers: ${JSON.stringify(getLayerStats())}`);');
    lines.push('  console.log("");');
    lines.push('  console.log("Available commands:");');
    lines.push('  console.log("  - getModule(name)");');
    lines.push('  console.log("  - listModules(layer)");');
    lines.push('  console.log("  - getDependencies(name)");');
    lines.push('  console.push("  - getLayerStats()");');
    lines.push('  console.log("  - getExternalDeps()");');
    lines.push('  console.log("  - getPackageDeps()");');
    lines.push('}');
    lines.push('');

    // Write to file
    const content = lines.join('\n');
    const outputFile = path.join(this.root, outputPath);
    fs.writeFileSync(outputFile, content, 'utf-8');

    this.log(`Bundle written: ${outputFile}`);

    // Stats
    console.log('\n' + '='.repeat(60));
    console.log('CALYX TYPESCRIPT BUNDLE COMPLETE');
    console.log('='.repeat(60));
    console.log(`Output: ${outputFile}`);
    console.log(`Modules: ${this.modules.size}`);
    console.log(`Layers: ${JSON.stringify(metadata.layers)}`);
    console.log(`TypeScript files: ${Array.from(this.modules.values()).filter(m => m.hasTypes).length}`);
    console.log(`React components: ${Array.from(this.modules.values()).filter(m => m.isReact).length}`);
    console.log(`External dependencies: ${metadata.external_deps.size}`);
    console.log(`Size: ${(content.length / 1024).toFixed(1)} KB`);
    console.log('='.repeat(60));

    return outputFile;
  }

  private escapeTemplateLiteral(str: string): string {
    return str
      .replace(/\\/g, '\\\\')      // Escape backslashes
      .replace(/`/g, '\\`')        // Escape backticks
      .replace(/\$/g, '\\$')       // Escape dollar signs
      .replace(/\r?\n/g, '\\n');   // Preserve newlines
  }

  private hasTypeScriptFiles(): boolean {
    return Array.from(this.modules.values()).some(m => m.hasTypes);
  }
}

// ============================================================================
// COMMAND LINE INTERFACE
// ============================================================================

async function main() {
  const args = process.argv.slice(2);
  
  let output = 'calyx_bundle.js';
  let root = '.';
  let verbose = false;
  const patterns: string[] = [];

  for (let i = 0; i < args.length; i++) {
    switch (args[i]) {
      case '--output':
      case '-o':
        output = args[++i];
        break;
      case '--root':
      case '-r':
        root = args[++i];
        break;
      case '--verbose':
      case '-v':
        verbose = true;
        break;
      case '--patterns':
      case '-p':
        patterns.push(args[++i]);
        break;
      case '--help':
      case '-h':
        console.log(`
CALYX TypeScript/JavaScript Bundler

Usage:
  npx tsx calyx_bundle.ts [options]

Options:
  -o, --output FILE    Output file (default: calyx_bundle.js)
  -r, --root DIR       Project root (default: .)
  -p, --patterns PAT   Glob patterns (can specify multiple)
  -v, --verbose        Verbose output
  -h, --help           Show this help

Examples:
  # Bundle all TypeScript/JavaScript files
  npx tsx calyx_bundle.ts --output bundle.calyx.js
  
  # Bundle specific patterns
  npx tsx calyx_bundle.ts --patterns "src/**/*.ts" --patterns "src/**/*.tsx"
  
  # Bundle with verbose output
  npx tsx calyx_bundle.ts --verbose --root ./my-project
        `);
        process.exit(0);
      default:
        if (!args[i].startsWith('-')) {
          patterns.push(args[i]);
        }
    }
  }

  // Default patterns if none specified
  if (patterns.length === 0) {
    patterns.push('**/*.{ts,tsx,js,jsx,mjs,cjs}');
  }

  const bundler = new CalyxTSBundler(root, verbose);
  await bundler.discover(patterns);
  bundler.generateBundle(output);
}

if (import.meta.url === `file://${process.argv[1]}`) {
  main().catch(console.error);
}

export { CalyxTSBundler };
