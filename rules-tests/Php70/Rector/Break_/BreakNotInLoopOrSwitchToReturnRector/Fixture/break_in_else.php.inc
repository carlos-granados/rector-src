<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakInElse()
{
    if (false) {
        return 1;
    } else {
        break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakInElse()
{
    if (false) {
        return 1;
    } else {
        return;
    }
}

?>
