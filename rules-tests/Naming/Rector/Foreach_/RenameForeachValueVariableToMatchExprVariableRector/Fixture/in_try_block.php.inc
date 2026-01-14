<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class InTryBlock
{
    public function run(array $items)
    {
        try {
            foreach ($items as $thing) {
                echo $thing;
            }
        } catch (\Exception $e) {
            // handle
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class InTryBlock
{
    public function run(array $items)
    {
        try {
            foreach ($items as $item) {
                echo $item;
            }
        } catch (\Exception $e) {
            // handle
        }
    }
}

?>
