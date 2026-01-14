<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function continue_in_default_case($value)
{
    switch ($value) {
        case 1:
            echo 'One';
            break;
        default:
            echo 'Default';
            continue;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function continue_in_default_case($value)
{
    switch ($value) {
        case 1:
            echo 'One';
            break;
        default:
            echo 'Default';
            break;
    }
}

?>
