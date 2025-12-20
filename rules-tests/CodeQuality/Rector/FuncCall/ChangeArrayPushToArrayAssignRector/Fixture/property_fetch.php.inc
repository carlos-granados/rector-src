<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class PropertyFetch
{
    private array $items = [];

    public function run()
    {
        array_push($this->items, $item);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class PropertyFetch
{
    private array $items = [];

    public function run()
    {
        $this->items[] = $item;
    }
}

?>
