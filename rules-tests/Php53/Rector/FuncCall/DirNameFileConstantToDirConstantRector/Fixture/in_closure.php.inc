<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InClosure
{
    public function run()
    {
        return function () {
            return dirname(__FILE__);
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InClosure
{
    public function run()
    {
        return function () {
            return __DIR__;
        };
    }
}

?>
