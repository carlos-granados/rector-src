<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class WithProperty
{
    private array $items = [];

    public function run()
    {
        list($this->items[], $this->items[]) = [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class WithProperty
{
    private array $items = [];

    public function run()
    {
        list($this->items[], $this->items[]) = array_reverse([1, 2]);
    }
}

?>
