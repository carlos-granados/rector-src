<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class Fixture
{
    public function run()
    {
        $value = 5 + '';
        $value = 5.0 + 'hi';
        $value = 5 + 'Tom';

        $value = 5 * '';
        $value = 5 * 'hi';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class Fixture
{
    public function run()
    {
        $value = 5 + 0;
        $value = 5.0 + 0.0;
        $value = 5 + 0;

        $value = 5 * 0;
        $value = 5 * 0;
    }
}

?>
