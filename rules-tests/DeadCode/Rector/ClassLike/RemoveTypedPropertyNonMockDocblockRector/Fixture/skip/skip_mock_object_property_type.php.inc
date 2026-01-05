<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveTypedPropertyNonMockDocblockRector\Fixture\Skip;

use PHPUnit\Framework\TestCase;
use PHPUnit\Framework\MockObject\MockObject;

final class SkipMockObjectPropertyType extends TestCase
{
    /**
     * @var MockObject
     */
    private MockObject $mock;
}
