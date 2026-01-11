<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithArrowFunction
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                return fn () => 'hello';
            case 'b':
                return fn () => 'hello';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithArrowFunction
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
            case 'b':
                return fn () => 'hello';
        }
    }
}

?>
