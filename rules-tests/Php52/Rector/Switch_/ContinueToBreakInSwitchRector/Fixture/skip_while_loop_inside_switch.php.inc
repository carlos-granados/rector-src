<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function skip_while_loop_inside_switch($value)
{
    switch ($value) {
        case 1:
            $i = 0;
            while ($i < 10) {
                if ($i % 2 === 0) {
                    $i++;
                    continue;
                }
                echo $i;
                $i++;
            }
            break;
        case 2:
            echo 'Two';
            break;
    }
}
