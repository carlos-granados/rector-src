<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

use Traversable;

class SkipTraversableType
{
    public function run(Traversable $traversable)
    {
        foreach ($traversable->getIterator() as $item) {
            echo $item;
        }
    }
}

