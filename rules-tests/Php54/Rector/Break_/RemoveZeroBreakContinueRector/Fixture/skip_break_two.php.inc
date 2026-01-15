<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class SkipBreakTwo
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            foreach ($item as $subItem) {
                if ($subItem === 'stop') {
                    break 2;
                }
            }
        }
    }
}

?>
