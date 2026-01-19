<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function withComplexCondition($obj)
{
    switch ($obj->getType()) {
        case 'type1':
            return 'first';
        default:
            return 'default1';
        case 'type2':
            return 'second';
        default:
            return 'default2';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function withComplexCondition($obj)
{
    switch ($obj->getType()) {
        case 'type1':
            return 'first';
        case 'type2':
            return 'second';
        default:
            return 'default2';
    }
}

?>
