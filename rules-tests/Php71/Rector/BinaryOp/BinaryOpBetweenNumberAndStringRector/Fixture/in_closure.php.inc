<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class InClosure
{
    public function run()
    {
        $fn = function () {
            return 5 + 'text';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class InClosure
{
    public function run()
    {
        $fn = function () {
            return 5 + 0;
        };
    }
}

?>
