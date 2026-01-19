<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function withFallthrough($value)
{
    switch ($value) {
        case 1:
        case 2:
            echo 'one or two';
            break;
        default:
        case 3:
            echo 'default or three';
            break;
        default:
            echo 'final default';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function withFallthrough($value)
{
    switch ($value) {
        case 1:
        case 2:
            echo 'one or two';
            break;
        case 3:
            echo 'default or three';
            break;
        default:
            echo 'final default';
            break;
    }
}

?>
