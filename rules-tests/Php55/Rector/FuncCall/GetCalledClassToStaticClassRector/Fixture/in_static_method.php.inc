<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InStaticMethod
{
    public static function getClassName(): string
    {
        return get_called_class();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InStaticMethod
{
    public static function getClassName(): string
    {
        return static::class;
    }
}

?>
