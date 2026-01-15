<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function variableWithTwoValue()
{
    $two = 2;
    foreach ([1, 2, 3] as $item) {
        foreach ([4, 5, 6] as $inner) {
            break $two;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function variableWithTwoValue()
{
    $two = 2;
    foreach ([1, 2, 3] as $item) {
        foreach ([4, 5, 6] as $inner) {
            break 2;
        }
    }
}

?>
