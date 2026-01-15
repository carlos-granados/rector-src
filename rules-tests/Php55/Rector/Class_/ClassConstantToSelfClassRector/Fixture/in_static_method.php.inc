<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InStaticMethod
{
    public static function getClassName()
    {
        return __CLASS__;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InStaticMethod
{
    public static function getClassName()
    {
        return self::class;
    }
}

?>
