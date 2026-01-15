<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class SkipBreakOne
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            if ($item === 'stop') {
                break 1;
            }
        }
    }
}

?>
