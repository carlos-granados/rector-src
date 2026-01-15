<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

function getArray(): array
{
    return [1, 2];
}

class FromFunctionCall
{
    public function run()
    {
        list($a[], $a[]) = getArray();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

function getArray(): array
{
    return [1, 2];
}

class FromFunctionCall
{
    public function run()
    {
        list($a[], $a[]) = array_reverse(getArray());
    }
}

?>
