<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function nestedIfBreak(int $a, int $b)
{
    if ($a > 0) {
        if ($b > 0) {
            break;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function nestedIfBreak(int $a, int $b)
{
    if ($a > 0) {
        if ($b > 0) {
            return;
        }
    }
}

?>
