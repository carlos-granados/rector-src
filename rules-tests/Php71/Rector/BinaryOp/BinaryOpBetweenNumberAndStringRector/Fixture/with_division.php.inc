<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithDivision
{
    public function run()
    {
        $value = 100 / 'text';
        $value = 'text' / 100;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithDivision
{
    public function run()
    {
        $value = 100 / 0;
        $value = 0 / 100;
    }
}

?>
