<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

use Iterator;

class SkipIteratorType
{
    public function run(Iterator $values)
    {
        if (!empty($values)) {
            foreach ($values as $value) {
                echo $value;
            }
        }
    }
}

?>
