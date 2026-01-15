<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakAfterLoop(array $values)
{
    foreach ($values as $value) {
        echo $value;
    }

    if (count($values) === 0) {
        break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function breakAfterLoop(array $values)
{
    foreach ($values as $value) {
        echo $value;
    }

    if (count($values) === 0) {
        return;
    }
}

?>
