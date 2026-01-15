<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function continueZeroInFor()
{
    for ($i = 0; $i < 10; $i++) {
        continue 0;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function continueZeroInFor()
{
    for ($i = 0; $i < 10; $i++) {
        continue;
    }
}

?>
