<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class IfCondition
{
    public function run($a, $b)
    {
        if (!($a > 10 || $b < 5)) {
            return true;
        }
        
        if (!($a === null || $b === false)) {
            return false;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class IfCondition
{
    public function run($a, $b)
    {
        if ($a <= 10 && $b >= 5) {
            return true;
        }
        
        if ($a !== null && $b !== false) {
            return false;
        }
    }
}

?>
