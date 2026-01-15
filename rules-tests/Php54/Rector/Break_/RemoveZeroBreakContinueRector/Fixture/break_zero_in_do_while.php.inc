<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function breakZeroInDoWhile()
{
    do {
        break 0;
    } while (true);
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function breakZeroInDoWhile()
{
    do {
        break;
    } while (true);
}

?>
