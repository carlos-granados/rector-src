<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

class WithPropertyAccess
{
    public function compare($objA, $objB): int
    {
        return ($objA->value < $objB->value) ? -1 : (($objA->value > $objB->value) ? 1 : 0);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

class WithPropertyAccess
{
    public function compare($objA, $objB): int
    {
        return $objA->value <=> $objB->value;
    }
}

?>
