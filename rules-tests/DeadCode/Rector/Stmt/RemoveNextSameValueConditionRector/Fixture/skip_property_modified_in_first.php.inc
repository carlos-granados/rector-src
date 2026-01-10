<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipPropertyModifiedInFirst
{
    private array $items = [];

    public function run()
    {
        $count = 100;
        if ($this->items === []) {
            $this->items = ['a'];
        }

        if ($this->items === []) {
            return $count;
        }
    }
}
