<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithStringValues
{
    public function run($object)
    {
        return ! $object instanceof TypeForCheck ? 'not found' : 'found';
    }
}

?>
-----
<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class FlipWithStringValues
{
    public function run($object)
    {
        return $object instanceof TypeForCheck ? 'found' : 'not found';
    }
}

?>
