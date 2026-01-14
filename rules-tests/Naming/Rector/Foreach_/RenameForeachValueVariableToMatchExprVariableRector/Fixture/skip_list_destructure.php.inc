<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class SkipListDestructure
{
    public function run()
    {
        foreach ($pairs as [$key, $value]) {
            echo $key . ': ' . $value;
        }
    }
}
