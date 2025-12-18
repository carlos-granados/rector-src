<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class SkipNestedYieldInClosure extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething($value)
    {
    }

    public function provideData()
    {
        $generator = function () {
            yield ['nested'];
        };

        return [
            ['data1'],
            ['data2'],
        ];
    }
}
