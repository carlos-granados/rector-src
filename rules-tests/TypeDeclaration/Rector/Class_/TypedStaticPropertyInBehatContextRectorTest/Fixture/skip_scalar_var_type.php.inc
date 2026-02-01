<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\TypedStaticPropertyInBehatContextRectorTest\Fixture;

use Behat\Behat\Context\Context;

final class SkipScalarVarType implements Context
{
    /**
     * @var string
     */
    public static $name;
}
