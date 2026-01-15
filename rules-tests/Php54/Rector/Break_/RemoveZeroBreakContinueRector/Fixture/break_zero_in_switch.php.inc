<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function breakZeroInSwitch($value)
{
    switch ($value) {
        case 1:
            break 0;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function breakZeroInSwitch($value)
{
    switch ($value) {
        case 1:
            break;
    }
}

?>
