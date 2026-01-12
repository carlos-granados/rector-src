<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipNegatedInstanceof
{
    public function run($object)
    {
        echo ! $object instanceof TypeForCheck ? null : $object->getPrice();
    }
}

?>
-----
<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipNegatedInstanceof
{
    public function run($object)
    {
        echo $object instanceof TypeForCheck ? $object->getPrice() : null;
    }
}

?>
