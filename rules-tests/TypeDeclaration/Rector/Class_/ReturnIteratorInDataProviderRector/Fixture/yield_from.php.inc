<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class YieldFrom extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething($value)
    {
    }

    public function provideData()
    {
        yield from [
            ['data1'],
            ['data2'],
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class YieldFrom extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething($value)
    {
    }

    public function provideData(): \Iterator
    {
        yield from [
            ['data1'],
            ['data2'],
        ];
    }
}

?>
