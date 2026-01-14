<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function continue_one_explicit($value)
{
    switch ($value) {
        case 1:
            echo 'Hi';
            continue 1;
        case 2:
            echo 'Hello';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function continue_one_explicit($value)
{
    switch ($value) {
        case 1:
            echo 'Hi';
            break;
        case 2:
            echo 'Hello';
            break;
    }
}

?>
