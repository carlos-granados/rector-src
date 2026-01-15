<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class ShortArraySyntax
{
    public function run()
    {
        [$a[], $a[]] = [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class ShortArraySyntax
{
    public function run()
    {
        [$a[], $a[]] = array_reverse([1, 2]);
    }
}

?>
