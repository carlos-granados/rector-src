<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function consecutiveDefaults($value)
{
    switch ($value) {
        case 1:
            echo 'one';
            break;
        default:
        default:
        default:
            echo 'triple default';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function consecutiveDefaults($value)
{
    switch ($value) {
        case 1:
            echo 'one';
            break;
        default:
            echo 'triple default';
            break;
    }
}

?>
