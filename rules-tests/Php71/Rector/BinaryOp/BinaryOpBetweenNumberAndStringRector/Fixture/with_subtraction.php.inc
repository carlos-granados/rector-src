<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithSubtraction
{
    public function run()
    {
        $value = 10 - 'abc';
        $value = 5.5 - 'hello';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithSubtraction
{
    public function run()
    {
        $value = 10 - 0;
        $value = 5.5 - 0.0;
    }
}

?>
