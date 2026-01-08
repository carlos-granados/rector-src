<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class SkipUsedInArrowFunction
{
    public function run()
    {
        $items = [];
        foreach ($items as $key => $value) {
            $callback = fn() => $key;
        }
    }
}
