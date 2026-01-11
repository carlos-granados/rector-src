<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class IntegerCaseValues
{
    public function run(int $value)
    {
        switch ($value) {
            case 1:
                return 'small';
            case 2:
                return 'small';
            case 3:
                return 'medium';
            case 4:
            case 5:
                return 'large';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class IntegerCaseValues
{
    public function run(int $value)
    {
        switch ($value) {
            case 1:
            case 2:
                return 'small';
            case 3:
                return 'medium';
            case 4:
            case 5:
                return 'large';
        }
    }
}

?>
