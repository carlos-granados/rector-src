<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InClosure
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

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function () {
            return self::class;
        };

        return $closure();
    }
}

?>
