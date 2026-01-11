<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class NestedSwitch
{
    public function run($value, $other)
    {
        switch ($value) {
            case 'a':
                switch ($other) {
                    case 1:
                        return 'one';
                    case 2:
                        return 'two';
                }
                break;
            case 'b':
                switch ($other) {
                    case 1:
                        return 'one';
                    case 2:
                        return 'two';
                }
                break;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class NestedSwitch
{
    public function run($value, $other)
    {
        switch ($value) {
            case 'a':
            case 'b':
                switch ($other) {
                    case 1:
                        return 'one';
                    case 2:
                        return 'two';
                }
                break;
        }
    }
}

?>
