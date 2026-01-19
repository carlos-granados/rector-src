<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class MultipleFunctions
{
    public function run()
    {
        $a = strlen('test', 1);
        $b = substr('hello', 0, 2, 3);
        $c = abs(-5, 1);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class MultipleFunctions
{
    public function run()
    {
        $a = strlen('test');
        $b = substr('hello', 0, 2);
        $c = abs(-5);
    }
}

?>
