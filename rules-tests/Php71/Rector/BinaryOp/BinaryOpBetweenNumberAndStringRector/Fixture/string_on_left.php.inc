<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class StringOnLeft
{
    public function run()
    {
        $value = 'text' + 5;
        $value = 'hello' * 10.5;
        $value = 'abc' - 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class StringOnLeft
{
    public function run()
    {
        $value = 0 + 5;
        $value = 0.0 * 10.5;
        $value = 0 - 3;
    }
}

?>
