<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class SkipClosure
{
    public function run(array $values)
    {
        $items = [];
        foreach ($values as $key => $value) {
            $items[$key] = function() use ($value) {
                return $value;
            };
        }
    }
}
