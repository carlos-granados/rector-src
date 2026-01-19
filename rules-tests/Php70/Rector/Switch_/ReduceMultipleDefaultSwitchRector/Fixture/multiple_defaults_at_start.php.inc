<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function multipleDefaultsAtStart($value)
{
    switch ($value) {
        default:
            echo 'first default';
            break;
        default:
            echo 'second default';
            break;
        case 1:
            echo 'one';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function multipleDefaultsAtStart($value)
{
    switch ($value) {
        default:
            echo 'second default';
            break;
        case 1:
            echo 'one';
            break;
    }
}

?>
