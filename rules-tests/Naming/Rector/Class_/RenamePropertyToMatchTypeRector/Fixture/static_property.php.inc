<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

final class StaticProperty
{
    private static EliteManager $eventManager;

    public static function setManager(EliteManager $manager): void
    {
        self::$eventManager = $manager;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

final class StaticProperty
{
    private static EliteManager $eliteManager;

    public static function setManager(EliteManager $manager): void
    {
        self::$eliteManager = $manager;
    }
}

?>
