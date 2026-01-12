<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithClosure
{
    public function run($object)
    {
        $fn = fn() => ! $object instanceof TypeForCheck ? null : $object->getPrice();
        return $fn();
    }
}

?>
-----
<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithClosure
{
    public function run($object)
    {
        $fn = fn() => $object instanceof TypeForCheck ? $object->getPrice() : null;
        return $fn();
    }
}

?>
