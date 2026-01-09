<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

use ArrayAccess;

class SkipArrayAccessType
{
    public function run(ArrayAccess $values)
    {
        if (!empty($values)) {
            foreach ($values as $value) {
                echo $value;
            }
        }
    }
}

?>
