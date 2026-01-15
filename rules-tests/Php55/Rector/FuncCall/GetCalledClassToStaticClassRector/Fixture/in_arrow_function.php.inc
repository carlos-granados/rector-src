<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => get_called_class();

        return $fn();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => static::class;

        return $fn();
    }
}

?>
