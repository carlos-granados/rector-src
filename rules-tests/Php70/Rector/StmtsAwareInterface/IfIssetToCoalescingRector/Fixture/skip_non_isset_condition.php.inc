<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipNonIssetCondition
{
    private $items = [];

    public function resolve($key)
    {
        if ($this->items[$key] !== null) {
            return $this->items[$key];
        }

        return 'fallback';
    }
}
