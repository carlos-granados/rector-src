<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnDocblockDataProviderRector\Fixture;

use PHPUnit\Framework\Attributes\DataProvider;
use PHPUnit\Framework\TestCase;

final class SkipMultipleReturns extends TestCase
{
    #[DataProvider('provideData')]
    public function testSomething()
    {
    }

    public static function provideData()
    {
        if (PHP_VERSION_ID >= 80000) {
            return [['php8']];
        }

        return [['php7']];
    }
}
