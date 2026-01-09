<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

use Traversable;

class SkipTraversableType
{
    public function run(Traversable $values)
    {
        if (!empty($values)) {
            foreach ($values as $value) {
                echo $value;
            }
        }
    }
}

?>
