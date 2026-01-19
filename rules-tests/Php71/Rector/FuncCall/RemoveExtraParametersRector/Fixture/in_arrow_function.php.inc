<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => strlen('test', 1);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => strlen('test');
    }
}

?>
