<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function variableWithZeroValue()
{
    $zero = 0;
    foreach ([1, 2, 3] as $item) {
        break $zero;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function variableWithZeroValue()
{
    $zero = 0;
    foreach ([1, 2, 3] as $item) {
        break;
    }
}

?>
