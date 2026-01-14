<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function switch_in_try_catch($value)
{
    try {
        switch ($value) {
            case 1:
                echo 'One';
                continue;
            case 2:
                echo 'Two';
                break;
        }
    } catch (\Exception $e) {
        echo 'Error';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function switch_in_try_catch($value)
{
    try {
        switch ($value) {
            case 1:
                echo 'One';
                break;
            case 2:
                echo 'Two';
                break;
        }
    } catch (\Exception $e) {
        echo 'Error';
    }
}

?>
