<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnTypeFromStrictTernaryRector\Fixture;

final class SkipNonTernaryReturn
{
    public function getValue($number)
    {
        return 100;
    }
}
