<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => 10 * 'hello';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => 10 * 0;
    }
}

?>
