<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\TypedStaticPropertyInBehatContextRectorTest\Fixture;

use Rector\Tests\TypeDeclaration\Rector\Class_\TypedStaticPropertyInBehatContextRectorTest\Source\OptionalBehatProperty;

final class SkipNonBehatContext
{
    /**
     * @var OptionalBehatProperty
     */
    public static $type;
}
