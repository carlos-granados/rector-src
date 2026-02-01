<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnTypeFromStrictTernaryRector\Fixture;

final class SkipMultipleReturns
{
    public function getValue($number)
    {
        if ($number > 10) {
            return $number ? 100 : 500;
        }

        return $number ? 200 : 600;
    }
}
