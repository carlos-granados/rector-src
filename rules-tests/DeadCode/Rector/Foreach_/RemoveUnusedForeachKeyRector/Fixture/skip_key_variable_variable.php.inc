<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class SkipKeyVariableVariable
{
    public function run()
    {
        $items = [];
        foreach ($items as $key => $value) {
            $varName = 'key';
            $result = $$varName;
        }
    }
}
