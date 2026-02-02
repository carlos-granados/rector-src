<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnArrayDocblockFromDataProviderParamRector\Fixture;

use PHPUnit\Framework\Attributes\DataProvider;
use PHPUnit\Framework\TestCase;

final class SkipParamWithoutType extends TestCase
{
    #[DataProvider('provideData')]
    public function testSomething($name)
    {
    }

    public static function provideData(): array
    {
        return ['first', 'second'];
    }
}
