<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function skip_do_while_inside_switch($value)
{
    switch ($value) {
        case 1:
            $i = 0;
            do {
                if ($i % 2 === 0) {
                    $i++;
                    continue;
                }
                echo $i;
                $i++;
            } while ($i < 10);
            break;
        case 2:
            echo 'Two';
            break;
    }
}
