<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InStaticMethod
{
    public static function getClassName()
    {
        return static::class;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InStaticMethod
{
    public static function getClassName()
    {
        return self::class;
    }
}

?>
