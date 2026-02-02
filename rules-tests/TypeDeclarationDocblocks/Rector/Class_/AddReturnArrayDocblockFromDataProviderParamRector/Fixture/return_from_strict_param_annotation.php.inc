<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnArrayDocblockFromDataProviderParamRector\Fixture;

use PHPUnit\Framework\TestCase;

final class ReturnFromStrictParamAnnotation extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething(string $name)
    {
    }

    public static function provideData(): array
    {
        return ['first', 'second'];
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddReturnArrayDocblockFromDataProviderParamRector\Fixture;

use PHPUnit\Framework\TestCase;

final class ReturnFromStrictParamAnnotation extends TestCase
{
    /**
     * @dataProvider provideData
     */
    public function testSomething(string $name)
    {
    }

    /**
     * @return string[]
     */
    public static function provideData(): array
    {
        return ['first', 'second'];
    }
}

?>
