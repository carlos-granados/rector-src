<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithMatch
{
    public function run($value, $other)
    {
        switch ($value) {
            case 'a':
                return match($other) {
                    1 => 'one',
                    default => 'other',
                };
            case 'b':
                return match($other) {
                    1 => 'one',
                    default => 'other',
                };
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithMatch
{
    public function run($value, $other)
    {
        switch ($value) {
            case 'a':
            case 'b':
                return match($other) {
                    1 => 'one',
                    default => 'other',
                };
        }
    }
}

?>
