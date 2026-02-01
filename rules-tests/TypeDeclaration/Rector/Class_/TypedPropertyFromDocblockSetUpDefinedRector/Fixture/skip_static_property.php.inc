<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Fixture;

use PHPUnit\Framework\TestCase;
use Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Source\SomeDocblockType;

final class SkipStaticProperty extends TestCase
{
    /**
     * @var SomeDocblockType
     */
    private static $someType;

    protected function setUp(): void
    {
        self::$someType = new SomeDocblockType();
    }
}
