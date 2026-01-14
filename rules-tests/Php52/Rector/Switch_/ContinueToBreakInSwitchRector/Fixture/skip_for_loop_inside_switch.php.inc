<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function skip_for_loop_inside_switch($value)
{
    switch ($value) {
        case 1:
            for ($i = 0; $i < 10; $i++) {
                if ($i % 2 === 0) {
                    continue;
                }
                echo $i;
            }
            break;
        case 2:
            echo 'Two';
            break;
    }
}
