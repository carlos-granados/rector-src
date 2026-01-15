<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function breakZeroInWhile()
{
    while (true) {
        break 0;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function breakZeroInWhile()
{
    while (true) {
        break;
    }
}

?>
