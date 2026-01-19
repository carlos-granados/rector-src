<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function defaultWithReturn($status)
{
    switch ($status) {
        case 'active':
            return true;
        default:
            return null;
        case 'inactive':
            return false;
        default:
            return -1;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function defaultWithReturn($status)
{
    switch ($status) {
        case 'active':
            return true;
        case 'inactive':
            return false;
        default:
            return -1;
    }
}

?>
