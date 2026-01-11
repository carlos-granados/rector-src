<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithClosure
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                return function () {
                    return 'hello';
                };
            case 'b':
                return function () {
                    return 'hello';
                };
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithClosure
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
            case 'b':
                return function () {
                    return 'hello';
                };
        }
    }
}

?>
