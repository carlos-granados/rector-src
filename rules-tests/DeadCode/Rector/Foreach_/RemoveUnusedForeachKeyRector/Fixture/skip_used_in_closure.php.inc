<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class SkipUsedInClosure
{
    public function run()
    {
        $items = [];
        foreach ($items as $key => $value) {
            $callback = function() use ($key) {
                return $key;
            };
        }
    }
}
