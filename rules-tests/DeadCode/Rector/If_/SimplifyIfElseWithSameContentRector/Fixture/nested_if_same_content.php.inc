<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class NestedIfSameContent
{
    public function run($a, $b)
    {
        if ($a) {
            if ($b) {
                return 1;
            } else {
                return 1;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class NestedIfSameContent
{
    public function run($a, $b)
    {
        if ($a) {
            return 1;
        }
    }
}

?>
