<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class SkipArrowFunction
{
    public function run(array $values)
    {
        $items = [];
        foreach ($values as $key => $value) {
            $items[$key] = fn() => $value;
        }
    }
}
