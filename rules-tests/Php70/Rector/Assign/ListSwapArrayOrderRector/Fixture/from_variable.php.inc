<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class FromVariable
{
    public function run(array $data)
    {
        list($a[], $a[]) = $data;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class FromVariable
{
    public function run(array $data)
    {
        list($a[], $a[]) = array_reverse($data);
    }
}

?>
