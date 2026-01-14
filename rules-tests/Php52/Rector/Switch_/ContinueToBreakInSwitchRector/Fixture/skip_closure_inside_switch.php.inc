<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function skip_closure_inside_switch($value, array $array)
{
    switch ($value) {
        case 1:
            $filtered = array_filter($array, function ($item) {
                if ($item === 0) {
                    return false;
                }
                return true;
            });
            break;
        case 2:
            echo 'Two';
            break;
    }
}
