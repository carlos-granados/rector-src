<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class StaticDataProvider extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething($value)
    {
    }

    public static function provideData()
    {
        yield ['data1'];
        yield ['data2'];
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ReturnIteratorInDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class StaticDataProvider extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething($value)
    {
    }

    public static function provideData(): \Iterator
    {
        yield ['data1'];
        yield ['data2'];
    }
}

?>
