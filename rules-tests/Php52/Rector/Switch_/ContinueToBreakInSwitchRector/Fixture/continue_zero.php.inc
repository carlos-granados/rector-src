<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function continue_zero($value)
{
    switch ($value) {
        case 1:
            echo 'One';
            continue 0;
        case 2:
            echo 'Two';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Switch_\ContinueToBreakInSwitchRector\Fixture;

function continue_zero($value)
{
    switch ($value) {
        case 1:
            echo 'One';
            break;
        case 2:
            echo 'Two';
            break;
    }
}

?>
