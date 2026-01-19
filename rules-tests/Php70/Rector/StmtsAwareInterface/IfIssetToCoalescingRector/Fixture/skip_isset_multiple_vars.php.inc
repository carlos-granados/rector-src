<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipIssetMultipleVars
{
    private $items = [];
    private $other = [];

    public function resolve($key)
    {
        if (isset($this->items[$key], $this->other[$key])) {
            return $this->other[$key];
        }

        return 'fallback';
    }
}
