<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class StaticPropertyFetch
{
    private static array $items = [];

    public function run()
    {
        array_push(self::$items, $item);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class StaticPropertyFetch
{
    private static array $items = [];

    public function run()
    {
        self::$items[] = $item;
    }
}

?>
