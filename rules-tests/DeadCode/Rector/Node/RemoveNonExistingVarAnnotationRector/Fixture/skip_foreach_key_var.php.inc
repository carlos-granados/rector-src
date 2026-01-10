<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SkipForeachKeyVar
{
    public function run(array $items)
    {
        /** @var int $key */
        foreach ($items as $key => $value) {
            echo $key;
        }
    }
}
