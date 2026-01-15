<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            return get_called_class();
        };

        return $closure();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            return static::class;
        };

        return $closure();
    }
}

?>
