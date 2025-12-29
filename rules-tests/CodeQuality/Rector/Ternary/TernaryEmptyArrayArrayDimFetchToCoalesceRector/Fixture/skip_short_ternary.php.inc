<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\TernaryEmptyArrayArrayDimFetchToCoalesceRector\Fixture;

final class SkipShortTernary
{
    private array $items = [];

    public function run()
    {
        return ! empty($this->items) ?: 'default';
    }
}
