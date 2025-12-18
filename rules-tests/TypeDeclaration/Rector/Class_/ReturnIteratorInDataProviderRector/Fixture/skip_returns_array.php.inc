<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class SkipReturnsArray extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething($value)
    {
    }

    public function provideData()
    {
        return [
            ['data1'],
            ['data2'],
        ];
    }
}
