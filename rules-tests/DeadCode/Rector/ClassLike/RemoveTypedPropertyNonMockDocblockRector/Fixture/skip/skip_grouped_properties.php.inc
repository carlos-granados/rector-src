<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Fixture\Skip;

use PHPUnit\Framework\TestCase;
use PHPUnit\Framework\MockObject\MockObject;
use Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Source\RealType;

final class SkipGroupedProperties extends TestCase
{
    /**
     * @var RealType|MockObject
     */
    private RealType $prop1, $prop2;
}
