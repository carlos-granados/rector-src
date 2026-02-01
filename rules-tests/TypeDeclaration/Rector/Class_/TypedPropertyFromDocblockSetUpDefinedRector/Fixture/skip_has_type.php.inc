<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Fixture;

use PHPUnit\Framework\TestCase;
use Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Source\SomeDocblockType;

final class SkipHasType extends TestCase
{
    /**
     * @var SomeDocblockType
     */
    private SomeDocblockType $someType;

    protected function setUp(): void
    {
        $this->someType = new SomeDocblockType();
    }
}
