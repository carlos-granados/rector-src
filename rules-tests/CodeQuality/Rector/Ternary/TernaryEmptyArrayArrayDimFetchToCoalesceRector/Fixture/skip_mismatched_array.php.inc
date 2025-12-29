<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\TernaryEmptyArrayArrayDimFetchToCoalesceRector\Fixture;

final class SkipMismatchedArray
{
    private array $items = [];
    private array $other = [];

    public function run()
    {
        return ! empty($this->items) ? $this->other[0] : 'default';
    }
}
