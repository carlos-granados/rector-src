<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnDocblockDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class DataProviderAnnotation extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething()
    {
    }

    public static function provideData()
    {
        return [
            ['data1'],
            ['data2'],
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnDocblockDataProviderRector\Fixture;

use PHPUnit\Framework\TestCase;

final class DataProviderAnnotation extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething()
    {
    }

    /**
     * @return string[][]
     */
    public static function provideData()
    {
        return [
            ['data1'],
            ['data2'],
        ];
    }
}

?>
