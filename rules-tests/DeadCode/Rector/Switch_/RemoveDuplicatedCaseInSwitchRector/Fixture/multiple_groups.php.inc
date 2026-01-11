<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class MultipleGroups
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                return 'first';
            case 'b':
                return 'first';
            case 'c':
                return 'second';
            case 'd':
                return 'second';
            case 'e':
                return 'third';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class MultipleGroups
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
            case 'b':
                return 'first';
            case 'c':
            case 'd':
                return 'second';
            case 'e':
                return 'third';
        }
    }
}

?>
