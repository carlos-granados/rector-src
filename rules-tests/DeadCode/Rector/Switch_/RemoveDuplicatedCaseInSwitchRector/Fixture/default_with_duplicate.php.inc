<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class DefaultWithDuplicate
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                return 'value';
            case 'b':
                return 'other';
            default:
                return 'value';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class DefaultWithDuplicate
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
            default:
                return 'value';
            case 'b':
                return 'other';
        }
    }
}

?>
