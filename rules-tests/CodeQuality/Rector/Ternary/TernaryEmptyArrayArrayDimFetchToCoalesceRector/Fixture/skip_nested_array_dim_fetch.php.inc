<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\TernaryEmptyArrayArrayDimFetchToCoalesceRector\Fixture;

final class SkipNestedArrayDimFetch
{
    private array $items = [];

    public function run()
    {
        return ! empty($this->items) ? $this->items['key'][0] : 'default';
    }
}
