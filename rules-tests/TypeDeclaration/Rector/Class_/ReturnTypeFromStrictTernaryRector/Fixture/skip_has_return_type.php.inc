<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnTypeFromStrictTernaryRector\Fixture;

final class SkipHasReturnType
{
    public function getValue($number): int
    {
        return $number ? 100 : 500;
    }
}
