<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class ThreeArrayAppends
{
    public function run()
    {
        list($a[], $a[], $a[]) = [1, 2, 3];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class ThreeArrayAppends
{
    public function run()
    {
        list($a[], $a[], $a[]) = array_reverse([1, 2, 3]);
    }
}

?>
