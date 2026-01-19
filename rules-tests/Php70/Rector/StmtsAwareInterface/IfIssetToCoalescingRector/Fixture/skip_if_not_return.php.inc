<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class SkipIfNotReturn
{
    private $items = [];

    public function resolve($key)
    {
        if (isset($this->items[$key])) {
            echo $this->items[$key];
        }

        return 'fallback';
    }
}
