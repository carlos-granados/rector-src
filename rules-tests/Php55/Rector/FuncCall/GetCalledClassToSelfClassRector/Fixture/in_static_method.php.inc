<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InStaticMethod
{
    public static function getClassName(): string
    {
        return get_called_class();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InStaticMethod
{
    public static function getClassName(): string
    {
        return self::class;
    }
}

?>
