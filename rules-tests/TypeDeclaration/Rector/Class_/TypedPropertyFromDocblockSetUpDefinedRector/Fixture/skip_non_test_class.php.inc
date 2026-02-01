<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Source\SomeDocblockType;

final class SkipNonTestClass
{
    /**
     * @var SomeDocblockType
     */
    private $someType;

    protected function setUp(): void
    {
        $this->someType = new SomeDocblockType();
    }
}
