<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class SkipReferenceForeach
{
    public function run(array $values)
    {
        $items = [];
        foreach ($values as $key => &$value) {
            $items[$key] = null;
        }
    }
}
