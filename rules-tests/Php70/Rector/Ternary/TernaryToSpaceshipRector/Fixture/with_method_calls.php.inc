<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

class WithMethodCalls
{
    public function compare($objA, $objB): int
    {
        return ($objA->getValue() < $objB->getValue()) ? -1 : (($objA->getValue() > $objB->getValue()) ? 1 : 0);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

class WithMethodCalls
{
    public function compare($objA, $objB): int
    {
        return $objA->getValue() <=> $objB->getValue();
    }
}

?>
