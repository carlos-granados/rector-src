<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class InIfBlock
{
    public function run(array $items)
    {
        if (count($items) > 0) {
            foreach ($items as $thing) {
                echo $thing;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class InIfBlock
{
    public function run(array $items)
    {
        if (count($items) > 0) {
            foreach ($items as $item) {
                echo $item;
            }
        }
    }
}

?>
