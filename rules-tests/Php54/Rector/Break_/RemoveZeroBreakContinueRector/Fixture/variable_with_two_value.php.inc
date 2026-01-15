<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class VariableWithTwoValue
{
    public function run(array $items)
    {
        $two = 2;
        foreach ($items as $item) {
            foreach ($item as $subItem) {
                if ($subItem === 'stop') {
                    break $two;
                }
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class VariableWithTwoValue
{
    public function run(array $items)
    {
        $two = 2;
        foreach ($items as $item) {
            foreach ($item as $subItem) {
                if ($subItem === 'stop') {
                    break 2;
                }
            }
        }
    }
}

?>
