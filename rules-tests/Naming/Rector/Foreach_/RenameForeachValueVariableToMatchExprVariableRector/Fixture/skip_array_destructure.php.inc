<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class SkipArrayDestructure
{
    public function run()
    {
        foreach ($pairs as ['key' => $key, 'value' => $value]) {
            echo $key . ': ' . $value;
        }
    }
}
