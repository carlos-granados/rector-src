<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnTypeFromStrictTernaryRector\Fixture;

final class TestDifferentTypes
{
    public function getValue($number)
    {
        return $number ? 'string' : 123;
    }
}
