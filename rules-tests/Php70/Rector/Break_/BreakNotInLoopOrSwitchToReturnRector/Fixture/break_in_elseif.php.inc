<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakInElseif(int $value)
{
    if ($value === 1) {
        return 1;
    } elseif ($value === 2) {
        break;
    } else {
        return 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakInElseif(int $value)
{
    if ($value === 1) {
        return 1;
    } elseif ($value === 2) {
        return;
    } else {
        return 3;
    }
}

?>
