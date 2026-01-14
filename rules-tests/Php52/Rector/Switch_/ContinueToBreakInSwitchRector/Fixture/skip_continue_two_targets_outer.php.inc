<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function skip_continue_two_targets_outer(array $array)
{
    foreach ($array as $item) {
        switch ($item) {
            case 1:
                echo 'One';
                continue 2;
            case 2:
                echo 'Two';
                break;
        }
        echo 'After switch';
    }
}
