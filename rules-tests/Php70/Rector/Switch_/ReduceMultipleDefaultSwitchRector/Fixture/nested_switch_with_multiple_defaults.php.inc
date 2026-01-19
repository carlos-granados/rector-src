<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function nestedSwitchWithMultipleDefaults($outer, $inner)
{
    switch ($outer) {
        case 1:
            switch ($inner) {
                default:
                    echo 'inner first';
                default:
                    echo 'inner second';
                    break;
            }
            break;
        default:
            echo 'outer first';
        default:
            echo 'outer second';
            break;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function nestedSwitchWithMultipleDefaults($outer, $inner)
{
    switch ($outer) {
        case 1:
            switch ($inner) {
                default:
                    echo 'inner second';
                    break;
            }
            break;
        default:
            echo 'outer second';
            break;
    }
}

?>
