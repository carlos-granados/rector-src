<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithStaticCall
{
    public function run($object)
    {
        return ! $object instanceof TypeForCheck ? null : TypeForCheck::calculate();
    }
}

?>
-----
<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithStaticCall
{
    public function run($object)
    {
        return $object instanceof TypeForCheck ? TypeForCheck::calculate() : null;
    }
}

?>
