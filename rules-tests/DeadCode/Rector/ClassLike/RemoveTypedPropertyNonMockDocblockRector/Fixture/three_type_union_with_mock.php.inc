<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Fixture;

use PHPUnit\Framework\TestCase;
use PHPUnit\Framework\MockObject\MockObject;
use Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Source\RealType;

final class ThreeTypeUnionWithMock extends TestCase
{
    /**
     * @var RealType|MockObject|\stdClass
     */
    private RealType $someProperty;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Fixture;

use PHPUnit\Framework\TestCase;
use PHPUnit\Framework\MockObject\MockObject;
use Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Source\RealType;

final class ThreeTypeUnionWithMock extends TestCase
{
    private RealType $someProperty;
}

?>
