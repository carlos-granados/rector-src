<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipNotFollowedByReturn
{
    private $items = [];

    public function resolve($key)
    {
        if (isset($this->items[$key])) {
            return $this->items[$key];
        }

        echo 'not found';
    }
}
