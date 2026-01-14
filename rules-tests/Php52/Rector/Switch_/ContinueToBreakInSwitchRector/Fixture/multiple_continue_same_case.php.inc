<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function multiple_continue_same_case($value, $flag)
{
    switch ($value) {
        case 1:
            if ($flag) {
                echo 'With flag';
                continue;
            }
            echo 'Without flag';
            continue;
        case 2:
            echo 'Two';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function multiple_continue_same_case($value, $flag)
{
    switch ($value) {
        case 1:
            if ($flag) {
                echo 'With flag';
                break;
            }
            echo 'Without flag';
            break;
        case 2:
            echo 'Two';
            break;
    }
}

?>
