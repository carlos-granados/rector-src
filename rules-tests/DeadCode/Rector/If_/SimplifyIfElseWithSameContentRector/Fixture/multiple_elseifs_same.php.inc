<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class MultipleElseifsSame
{
    public function run($a, $b, $c)
    {
        if ($a) {
            return 'result';
        } elseif ($b) {
            return 'result';
        } elseif ($c) {
            return 'result';
        } else {
            return 'result';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class MultipleElseifsSame
{
    public function run($a, $b, $c)
    {
        return 'result';
    }
}

?>
