<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

use Generator;

class SkipGeneratorType
{
    public function run(Generator $values)
    {
        if (!empty($values)) {
            foreach ($values as $value) {
                echo $value;
            }
        }
    }
}

?>
