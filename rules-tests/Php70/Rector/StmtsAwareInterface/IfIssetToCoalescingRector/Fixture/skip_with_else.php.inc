<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipWithElse
{
    private $items = [];

    public function resolve($key)
    {
        if (isset($this->items[$key])) {
            return $this->items[$key];
        } else {
            return 'else value';
        }

        return 'fallback';
    }
}
