<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class VariableWithZeroValue
{
    public function run(array $items)
    {
        $zero = 0;
        foreach ($items as $item) {
            if ($item === 'stop') {
                break $zero;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class VariableWithZeroValue
{
    public function run(array $items)
    {
        $zero = 0;
        foreach ($items as $item) {
            if ($item === 'stop') {
                break;
            }
        }
    }
}

?>
