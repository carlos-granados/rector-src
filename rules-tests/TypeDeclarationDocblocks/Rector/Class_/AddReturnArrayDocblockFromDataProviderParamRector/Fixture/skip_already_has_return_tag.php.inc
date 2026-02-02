<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnArrayDocblockFromDataProviderParamRector\Fixture;

use PHPUnit\Framework\Attributes\DataProvider;
use PHPUnit\Framework\TestCase;

final class SkipAlreadyHasReturnTag extends TestCase
{
    #[DataProvider('provideData')]
    public function testSomething(string $name)
    {
    }

    /**
     * @return array<int, string>
     */
    public static function provideData(): array
    {
        return ['first', 'second'];
    }
}
