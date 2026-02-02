<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\ClassMethodArrayDocblockParamFromLocalCallsRector\Fixture;

final class StaticMethodCall
{
    public function go()
    {
        self::run(['item1', 'item2']);
    }

    private static function run(array $items)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\ClassMethodArrayDocblockParamFromLocalCallsRector\Fixture;

final class StaticMethodCall
{
    public function go()
    {
        self::run(['item1', 'item2']);
    }

    /**
     * @param string[] $items
     */
    private static function run(array $items)
    {
    }
}

?>
