<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakAtTopLevel()
{
    echo 'hello';
    break;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakAtTopLevel()
{
    echo 'hello';
}

?>
