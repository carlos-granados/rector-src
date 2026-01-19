<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithModulo
{
    public function run()
    {
        $value = 10 % 'abc';
        $value = 'abc' % 10;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithModulo
{
    public function run()
    {
        $value = 10 % 0;
        $value = 0 % 10;
    }
}

?>
