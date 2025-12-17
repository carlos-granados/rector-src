<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class ReturnStatement
{
    public function check($a, $b)
    {
        return !($a > 5 || $b < 10);
    }
    
    public function checkNull($value, $other)
    {
        return !($value === null || $other === null);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class ReturnStatement
{
    public function check($a, $b)
    {
        return $a <= 5 && $b >= 10;
    }
    
    public function checkNull($value, $other)
    {
        return $value !== null && $other !== null;
    }
}

?>
