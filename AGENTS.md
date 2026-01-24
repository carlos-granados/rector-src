# Rector Development Agent Guidelines

## Project Overview

**Rector** is an instant upgrade and automated refactoring tool for PHP code. It uses PHP Parser's Abstract Syntax Tree (AST) to analyze and transform PHP code by applying a set of rules (called "Rectors") to the codebase.

This repository (`rectorphp/rector-src`) is the development repository. Code here requires PHP 8.2+ and is built/downgraded to PHP 7.4+ for the main `rector/rector` package.

---

## Directory Structure

| Directory | Description |
|-----------|-------------|
| `src/` | Core framework code (AST analysis, type resolution, node manipulation, application logic) |
| `rules/` | Rector rule implementations organized by category |
| `rules-tests/` | Tests for Rector rules with fixture files |
| `tests/` | Tests for core framework functionality |
| `config/` | Configuration files for Rector sets and services |
| `config/set/` | Rule set configurations (e.g., `php80.php`, `code-quality.php`) |
| `utils/` | Utility classes used across the project |
| `stubs/` | PHP stubs for type analysis |
| `bin/` | CLI entry point (`bin/rector`) |
| `e2e/` | End-to-end test scenarios |

### Rule Categories (in `rules/`)

- **CodeQuality** - General code quality improvements
- **CodingStyle** - Coding style and formatting rules
- **DeadCode** - Remove unused/dead code
- **EarlyReturn** - Simplify control flow with early returns
- **Naming** - Variable and method naming improvements
- **Php52-Php85** - PHP version upgrade rules
- **TypeDeclaration** - Add type declarations to code
- **Transform** - Code transformation utilities
- And others (Arguments, Carbon, Privatization, Renaming, etc.)

---

## Development Requirements

- **PHP Version**: 8.2+
- **Dependencies**: Managed via Composer (`composer install`)

---

## IMPORTANT: Testing & Validation Requirements

**After making ANY code changes, you MUST run the complete validation suite before considering the work done.**

### Required Commands

Run the full CI check suite:

```bash
composer complete-check
```

This command runs:
1. **ECS (Easy Coding Standard)** - Code style checks
2. **PHPStan** - Static analysis (level 8)
3. **PHPUnit** - Unit tests

### Individual Commands

| Command | Description |
|---------|-------------|
| `composer check-cs` | Check code style only |
| `composer fix-cs` | Auto-fix code style issues |
| `composer phpstan` | Run static analysis only |
| `composer rector` | Apply Rector rules to your own code |
| `vendor/bin/phpunit` | Run all tests |
| `vendor/bin/phpunit tests/path/to/Test.php` | Run a specific test file |
| `vendor/bin/phpunit --filter TestMethodName` | Run a specific test method |

### Running Rector on a File

To test a Rector rule on a specific file:

```bash
bin/rector process <file> --dry-run
```

---

## Coding Standards

- Use `declare(strict_types=1);` in **all** PHP files
- Follow **PSR-12** coding standards
- Use **typed properties** and **return types** everywhere
- Write descriptive class and method names
- Keep methods focused - each should do one thing well
- No inline comments unless explicitly requested
- Do not add copyright or license headers

---

## Working with Rector Rules

### Rule Structure

Each Rector rule:
1. Extends `AbstractRector` (or a more specific base class)
2. Implements `getRuleDefinition()` - describes what the rule does with code samples
3. Implements `getNodeTypes()` - specifies which AST node types it operates on
4. Implements `refactor(Node $node)` - performs the transformation

Example rule location: `rules/CodeQuality/Rector/If_/SimplifyIfReturnBoolRector.php`

### Rule Testing

Each rule must have tests in `rules-tests/` with the following structure:

```
rules-tests/<Category>/Rector/<NodeType>/<RuleName>/
|-- <RuleName>Test.php           # Test class extending AbstractRectorTestCase
|-- config/
|   +-- configured_rule.php      # Rule configuration
+-- Fixture/
    +-- fixture.php.inc          # Test fixtures (before/after code)
```

### Fixture File Format

Fixture files use `-----` as a separator between input and expected output:

```php
<?php
// Input code (before transformation)
class SomeClass
{
    public function test()
    {
        // original code
    }
}

?>
-----
<?php
// Expected output (after transformation)
class SomeClass
{
    public function test()
    {
        // transformed code
    }
}

?>
```

If no transformation should occur, omit the `-----` separator and expected output.

### Test Class Template

```php
<?php

declare(strict_types=1);

namespace Rector\Tests\<Category>\Rector\<NodeType>\<RuleName>;

use Iterator;
use PHPUnit\Framework\Attributes\DataProvider;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

final class <RuleName>Test extends AbstractRectorTestCase
{
    #[DataProvider('provideData')]
    public function test(string $filePath): void
    {
        $this->doTestFile($filePath);
    }

    public static function provideData(): Iterator
    {
        return self::yieldFilesFromDirectory(__DIR__ . '/Fixture');
    }

    public function provideConfigFilePath(): string
    {
        return __DIR__ . '/config/configured_rule.php';
    }
}
```

---

## File Naming Conventions

- **Rule classes**: `<Action><Subject>Rector.php` (e.g., `RemoveUnusedPrivateMethodRector.php`)
- **Test classes**: Same name with `Test` suffix (e.g., `RemoveUnusedPrivateMethodRectorTest.php`)
- **Fixture files**: Descriptive names ending in `.php.inc` in `Fixture/` directory
- **Source files for tests**: Support files go in `Source/` directories

---

## Key Classes & Concepts

| Class | Purpose |
|-------|----------|
| `AbstractRector` | Base class for all Rector rules |
| `Node` | AST node from PHP Parser (e.g., `Expr\Variable`, `Stmt\Class_`) |
| `NodeTypeResolver` | Resolves PHP types for nodes (using PHPStan) |
| `NodeNameResolver` | Resolves names of nodes (class names, method names, etc.) |
| `PhpDocInfoFactory` | Parses and provides access to PHPDoc comments |
| `RectorConfig` | Configuration class for Rector rules |
| `AbstractRectorTestCase` | Base class for rule tests |

---

## Common Pitfalls

- **Don't modify nodes during traversal** - Return modified nodes from `refactor()` instead
- **Check for null returns** - Many node resolution methods return nullable types
- **Use proper type checking** - Use `NodeTypeResolver` for accurate type information
- **Consider edge cases** - PHP has many syntax variations; test thoroughly
- **Avoid false positives** - Rules should only trigger when transformation is safe

---

## Debugging

- Use `dump()` or `dd()` for debugging during development (from `tracy/tracy`)
- **Run individual rule tests for faster feedback** - this is the recommended debugging approach:

```bash
# Run a specific test class
vendor/bin/phpunit rules-tests/CodeQuality/Rector/If_/SimplifyIfReturnBoolRector/SimplifyIfReturnBoolRectorTest.php

# Run a specific test method
vendor/bin/phpunit --filter testMethodName
```

- To manually test a rule on a file: `bin/rector process <file> --dry-run`

---

## Git Operations - DO NOT COMMIT OR PUSH

**Do NOT commit or push any code changes unless explicitly instructed to do so by the user.**

- Do not run `git commit`
- Do not run `git push`
- Do not create new git branches unless explicitly requested
- Leave all changes uncommitted for user review

The user will handle all git operations (committing, pushing, branching) themselves.

---

## Summary Checklist

Before completing any task:

- [ ] Code follows PSR-12 and project coding standards
- [ ] All PHP files have `declare(strict_types=1);`
- [ ] New rules have corresponding tests with fixtures
- [ ] Run `composer complete-check` and all checks pass
- [ ] Run `composer rector` to ensure code follows Rector's own rules
- [ ] Do NOT commit or push changes
