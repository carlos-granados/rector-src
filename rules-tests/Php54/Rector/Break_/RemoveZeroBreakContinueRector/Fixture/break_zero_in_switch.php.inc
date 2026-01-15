<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class BreakZeroInSwitch
{
    public function run(int $value)
    {
        switch ($value) {
            case 1:
                echo 'one';
                break 0;
            case 2:
                echo 'two';
                break 0;
            default:
                echo 'other';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class BreakZeroInSwitch
{
    public function run(int $value)
    {
        switch ($value) {
            case 1:
                echo 'one';
                break;
            case 2:
                echo 'two';
                break;
            default:
                echo 'other';
        }
    }
}

?>
