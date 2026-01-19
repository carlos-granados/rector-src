<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class InClosure
{
    public function run()
    {
        $fn = function () {
            return strlen('test', 1, 2);
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class InClosure
{
    public function run()
    {
        $fn = function () {
            return strlen('test');
        };
    }
}

?>
