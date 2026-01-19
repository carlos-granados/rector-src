<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipMultipleStmtsInIf
{
    private $items = [];

    public function resolve($key)
    {
        if (isset($this->items[$key])) {
            $value = $this->items[$key];
            return $value;
        }

        return 'fallback';
    }
}
