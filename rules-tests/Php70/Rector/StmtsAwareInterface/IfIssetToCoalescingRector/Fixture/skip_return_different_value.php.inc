<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipReturnDifferentValue
{
    private $items = [];
    private $other = [];

    public function resolve($key)
    {
        if (isset($this->items[$key])) {
            return $this->other[$key];
        }

        return 'fallback';
    }
}
