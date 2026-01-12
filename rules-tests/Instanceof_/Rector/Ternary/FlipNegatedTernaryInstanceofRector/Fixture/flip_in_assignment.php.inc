<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipInAssignment
{
    public function run($object)
    {
        $result = ! $object instanceof TypeForCheck ? 0 : $object->getPrice();
        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipInAssignment
{
    public function run($object)
    {
        $result = $object instanceof TypeForCheck ? $object->getPrice() : 0;
        return $result;
    }
}

?>
