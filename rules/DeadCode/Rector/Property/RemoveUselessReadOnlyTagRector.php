<?php

declare(strict_types=1);

namespace Rector\DeadCode\Rector\Property;

use PhpParser\Node;
use PhpParser\Node\Param;
use PhpParser\Node\Stmt\Class_;
use PhpParser\Node\Stmt\ClassMethod;
use PhpParser\Node\Stmt\Property;
use PHPStan\PhpDocParser\Ast\PhpDoc\GenericTagValueNode;
use PHPStan\PhpDocParser\Ast\PhpDoc\PhpDocTagNode;
use Rector\BetterPhpDocParser\PhpDocInfo\PhpDocInfoFactory;
use Rector\Comments\NodeDocBlock\DocBlockUpdater;
use Rector\Privatization\NodeManipulator\VisibilityManipulator;
use Rector\Rector\AbstractRector;
use Rector\ValueObject\MethodName;
use Rector\ValueObject\PhpVersionFeature;
use Rector\VersionBonding\Contract\MinPhpVersionInterface;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\RemoveUselessReadOnlyTagRectorTest
 */
final class RemoveUselessReadOnlyTagRector extends AbstractRector implements MinPhpVersionInterface
{
    public function __construct(
        private readonly VisibilityManipulator $visibilityManipulator,
        private readonly PhpDocInfoFactory $phpDocInfoFactory,
        private readonly DocBlockUpdater $docBlockUpdater
    ) {
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition('Remove useless `@readonly` annotation on native readonly type', [
            new CodeSample(
                <<<'CODE_SAMPLE'
final class SomeClass
{
    /**
     * @readonly
     */
    private readonly string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}
CODE_SAMPLE

                ,
                <<<'CODE_SAMPLE'
final class SomeClass
{
    private readonly string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}
CODE_SAMPLE
            ),
        ]);
    }

    /**
     * @return array<class-string<Node>>
     */
    public function getNodeTypes(): array
    {
        return [Class_::class];
    }

    /**
     * @param Class_ $node
     */
    public function refactor(Node $node): ?Node
    {
        $hasChanged = false;
        $isClassReadonly = $this->visibilityManipulator->isReadonly($node);

        // Process class-level @readonly if class is readonly
        if ($isClassReadonly && $this->removeReadonlyTag($node)) {
            $hasChanged = true;
        }

        // Process properties
        foreach ($node->getProperties() as $property) {
            if ($this->shouldRemoveReadonlyTag($property, $isClassReadonly)) {
                $hasChanged = true;
            }
        }

        // Process promoted parameters in constructor
        $constructClassMethod = $node->getMethod(MethodName::CONSTRUCT);
        if ($constructClassMethod instanceof ClassMethod) {
            foreach ($constructClassMethod->getParams() as $param) {
                if (! $param->isPromoted()) {
                    continue;
                }

                if ($this->shouldRemoveReadonlyTag($param, $isClassReadonly)) {
                    $hasChanged = true;
                }
            }
        }

        if (! $hasChanged) {
            return null;
        }

        return $node;
    }

    public function provideMinPhpVersion(): int
    {
        return PhpVersionFeature::READONLY_PROPERTY;
    }

    private function shouldRemoveReadonlyTag(Property|Param $node, bool $isClassReadonly): bool
    {
        // Property/param is effectively readonly if it has readonly modifier or is in a readonly class
        $isEffectivelyReadonly = $this->visibilityManipulator->isReadonly($node) || $isClassReadonly;

        if (! $isEffectivelyReadonly) {
            return false;
        }

        return $this->removeReadonlyTag($node);
    }

    private function removeReadonlyTag(Class_|Property|Param $node): bool
    {
        $phpDocInfo = $this->phpDocInfoFactory->createFromNodeOrEmpty($node);
        $readonlyDoc = $phpDocInfo->getByName('readonly');
        if (! $readonlyDoc instanceof PhpDocTagNode) {
            return false;
        }

        if (! $readonlyDoc->value instanceof GenericTagValueNode) {
            return false;
        }

        if ($readonlyDoc->value->value !== '') {
            return false;
        }

        $phpDocInfo->removeByName('readonly');
        $this->docBlockUpdater->updateRefactoredNodeWithPhpDocInfo($node);

        return true;
    }
}
