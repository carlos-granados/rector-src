<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakWithLevel()
{
    if (true) {
        break 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakWithLevel()
{
    if (true) {
        return;
    }
}

?>
