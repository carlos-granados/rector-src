<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Fixture;

use PHPUnit\Framework\TestCase;
use Rector\Tests\TypeDeclaration\Rector\Class_\TypedPropertyFromDocblockSetUpDefinedRector\Source\SomeDocblockType;

final class SkipNoSetUpMethod extends TestCase
{
    /**
     * @var SomeDocblockType
     */
    private $someType;
}
