<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class WhileLoop
{
    public function run($a, $b)
    {
        while (!($a > 100 || $b < 0)) {
            $a++;
            $b--;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class WhileLoop
{
    public function run($a, $b)
    {
        while ($a <= 100 && $b >= 0) {
            $a++;
            $b--;
        }
    }
}

?>
