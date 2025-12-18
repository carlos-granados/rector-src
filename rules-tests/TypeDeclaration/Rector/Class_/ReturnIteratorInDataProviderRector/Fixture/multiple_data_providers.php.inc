<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class MultipleDataProviders extends TestCase
{
    /**
     * @dataProvider provideData1
     */
    public function testFirst($value)
    {
    }

    /**
     * @dataProvider provideData2
     */
    public function testSecond($value)
    {
    }

    public function provideData1()
    {
        yield ['data1'];
    }

    public function provideData2()
    {
        yield ['data2'];
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class MultipleDataProviders extends TestCase
{
    /**
     * @dataProvider provideData1
     */
    public function testFirst($value)
    {
    }

    /**
     * @dataProvider provideData2
     */
    public function testSecond($value)
    {
    }

    public function provideData1(): \Iterator
    {
        yield ['data1'];
    }

    public function provideData2(): \Iterator
    {
        yield ['data2'];
    }
}

?>
