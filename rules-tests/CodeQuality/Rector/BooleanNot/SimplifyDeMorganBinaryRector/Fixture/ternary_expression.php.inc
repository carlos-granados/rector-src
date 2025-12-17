<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class TernaryExpression
{
    public function run($a, $b)
    {
        $result = !($a > 0 || $b < 0) ? 'both in range' : 'out of range';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class TernaryExpression
{
    public function run($a, $b)
    {
        $result = $a <= 0 && $b >= 0 ? 'both in range' : 'out of range';
    }
}

?>
