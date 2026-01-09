<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

class SkipUnionWithNonArray
{
    public function run(array|string $values)
    {
        if (!empty($values)) {
            foreach ($values as $value) {
                echo $value;
            }
        }
    }
}

?>
