<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

abstract class InAbstractClass
{
    public function run()
    {
        return get_called_class();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

abstract class InAbstractClass
{
    public function run()
    {
        return static::class;
    }
}

?>
