<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithEquality
{
    public function run()
    {
        $value = 5 == 'abc';
        $value = 5 === 'abc';
        $value = 5 != 'abc';
        $value = 5 !== 'abc';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class WithEquality
{
    public function run()
    {
        $value = 5 == 0;
        $value = 5 === 0;
        $value = 5 != 0;
        $value = 5 !== 0;
    }
}

?>
