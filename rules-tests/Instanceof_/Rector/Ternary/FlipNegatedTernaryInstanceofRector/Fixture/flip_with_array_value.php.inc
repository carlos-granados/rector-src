<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithArrayValue
{
    public function run($object)
    {
        return ! $object instanceof TypeForCheck ? [] : [$object->getPrice()];
    }
}

?>
-----
<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithArrayValue
{
    public function run($object)
    {
        return $object instanceof TypeForCheck ? [$object->getPrice()] : [];
    }
}

?>
