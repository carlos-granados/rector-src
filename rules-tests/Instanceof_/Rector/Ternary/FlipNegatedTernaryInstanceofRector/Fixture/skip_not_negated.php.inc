<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

use Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Source\TypeForCheck;

final class SkipNotNegated
{
    public function run($object)
    {
        echo $object instanceof TypeForCheck ? $object->getPrice() : null;
    }
}
