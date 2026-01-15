<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class DataProvider
{
    public function getData(): array
    {
        return [1, 2];
    }
}

class FromMethodCall
{
    public function run(DataProvider $provider)
    {
        list($a[], $a[]) = $provider->getData();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class DataProvider
{
    public function getData(): array
    {
        return [1, 2];
    }
}

class FromMethodCall
{
    public function run(DataProvider $provider)
    {
        list($a[], $a[]) = array_reverse($provider->getData());
    }
}

?>
