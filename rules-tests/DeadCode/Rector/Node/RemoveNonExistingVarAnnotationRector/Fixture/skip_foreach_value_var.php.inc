<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SkipForeachValueVar
{
    public function run(array $items)
    {
        /** @var SomeClass $item */
        foreach ($items as $item) {
            echo $item->getName();
        }
    }
}
