<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        return fn() => dirname(__FILE__);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        return fn() => __DIR__;
    }
}

?>
