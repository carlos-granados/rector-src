<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            list($a[], $a[]) = [1, 2];
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            list($a[], $a[]) = array_reverse([1, 2]);
        };
    }
}

?>
