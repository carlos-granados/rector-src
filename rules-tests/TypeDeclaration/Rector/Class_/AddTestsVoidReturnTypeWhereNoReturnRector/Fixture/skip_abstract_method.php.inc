<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;

abstract class SkipAbstractMethod extends TestCase
{
    abstract public function testSomething();
}
