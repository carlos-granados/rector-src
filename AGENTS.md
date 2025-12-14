# Agent Guidelines for Rector Development

This document provides guidance for AI agents working on the Rector codebase.

## Project Overview

Rector is an instant upgrade and automated refactoring tool for PHP code. It uses PHP Parser's Abstract Syntax Tree (AST) to analyze and transform PHP code by applying a set of rules (called "Rectors") to the codebase.

## Architecture

- **`src/`** - Core framework code including application logic, AST analysis, type resolution, and node manipulation
- **`rules/`** - Rector rule implementations organized by category (CodeQuality, CodingStyle, DeadCode, PHP version upgrades, etc.)
- **`rules-tests/`** - Tests for Rector rules with fixtures
- **`tests/`** - Tests for core framework functionality
- **`config/`** - Configuration files for Rector sets and services
- **`utils/`** - Utility classes used across the project
- **`stubs/`** - PHP stubs for type analysis

## Development Requirements

- **PHP Version**: 8.2+ (the rector-src requires PHP 8.2, though the built rector/rector package supports PHP 7.4+)
- **Dependencies**: Managed via Composer

## Testing & Validation

After making ANY code changes, you MUST:

1. **Run the complete test suite**:
   ```bash
   composer complete-check
   ```
   This runs:
   - Code style checks (ECS)
   - Static analysis (PHPStan)
   - PHPUnit tests

2. **Apply Rector rules to your changes**:
   ```bash
   composer rector
   ```
   This ensures your code follows Rector's own coding standards and refactoring rules.

3. **Fix code style issues** (if any):
   ```bash
   composer fix-cs
   ```

## Coding Standards

- Use **strict types** (`declare(strict_types=1);`) in all PHP files
- Follow **PSR-12** coding standards
- Use **typed properties** and **return types** wherever possible
- Write **descriptive class and method names** that clearly indicate purpose
- Keep methods focused - each should do one thing well

## Working with Rector Rules

### Rule Structure

Each Rector rule:
- Extends `AbstractRector` or a more specific base class
- Implements `getRuleDefinition()` to describe what the rule does
- Implements `getNodeTypes()` to specify which AST node types it operates on
- Implements `refactor(Node $node)` to perform the transformation

### Rule Testing

- Each rule should have corresponding tests in `rules-tests/`
- Tests use fixture files: `Fixture/` for input and expected output
- Test classes extend `AbstractRectorTestCase`
- Use `doTestFile()` to run tests against fixture files

### Adding a New Rule

1. Create the rule class in the appropriate `rules/` subdirectory
2. Create test class in corresponding `rules-tests/` subdirectory
3. Create fixture files showing before/after transformations
4. Run `composer complete-check` to validate
5. Run `composer rector` to ensure the code follows standards

## Key Classes & Concepts

- **Node**: Represents an AST node from PHP Parser (e.g., `Expr\Variable`, `Stmt\Class_`)
- **NodeTypeResolver**: Resolves PHP types for nodes (using PHPStan)
- **NodeNameResolver**: Resolves names of nodes (class names, method names, etc.)
- **PhpDocInfoFactory**: Parses and provides access to PHPDoc comments
- **NodeManipulator**: Various utilities for manipulating AST nodes
- **ValueObject**: Immutable data transfer objects used throughout Rector

## Common Pitfalls

- **Don't modify nodes during traversal** - Return modified nodes from `refactor()` instead
- **Check for null returns** - Many node resolution methods return nullable types
- **Use proper type checking** - Use `NodeTypeResolver` for accurate type information
- **Consider edge cases** - PHP has many syntax variations; test thoroughly
- **Avoid false positives** - Rules should only trigger when transformation is safe and beneficial

## File Naming Conventions

- **Rule classes**: `<Action><Subject>Rector.php` (e.g., `RemoveUnusedPrivateMethodRector.php`)
- **Test classes**: Same name with `Test` suffix (e.g., `RemoveUnusedPrivateMethodRectorTest.php`)
- **Fixture files**: Descriptive names in `Fixture/` directory
- **Source files for tests**: Support files for tests go in `Source/` directories

## Debugging

- Use `dump()` or `dd()` for debugging during development (from `tracy/tracy`)
- Enable pretty print for PHPUnit: `vendor/bin/phpunit --enable-pretty-print`
- Run specific test: `vendor/bin/phpunit tests/path/to/Test.php`
- Run specific Rector rule on file: `bin/rector process <file> --dry-run --debug`

## Performance Considerations

- Rector processes large codebases - keep rules efficient
- Cache expensive operations where possible
- Avoid unnecessary node traversals
- Use early returns to skip nodes that don't match rule criteria

## Important Notes

- This is `rectorphp/rector-src` - the development repository
- User-facing issues should be reported in `rectorphp/rector`
- Changes here are built and downgraded to PHP 7.4+ for the main package
- Many vendor packages have custom patches applied (see `composer.json` extra.patches)
