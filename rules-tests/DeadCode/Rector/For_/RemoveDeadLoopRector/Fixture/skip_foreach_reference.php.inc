<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class SkipForeachReference
{
    public function run($values)
    {
        foreach ($values as &$value) {
        }
    }
}
