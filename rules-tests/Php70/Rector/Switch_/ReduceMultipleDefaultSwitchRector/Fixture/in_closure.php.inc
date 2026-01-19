<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

$closure = function ($value) {
    switch ($value) {
        case 1:
            return 'one';
        default:
            return 'first default';
        default:
            return 'second default';
    }
};

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

$closure = function ($value) {
    switch ($value) {
        case 1:
            return 'one';
        default:
            return 'second default';
    }
};

?>
