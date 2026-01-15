<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class SkipContinueOne
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            if ($item === 'skip') {
                continue 1;
            }
            echo $item;
        }
    }
}

?>
