<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InArrowFunction
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

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        $fn = fn() => self::class;

        return $fn();
    }
}

?>
