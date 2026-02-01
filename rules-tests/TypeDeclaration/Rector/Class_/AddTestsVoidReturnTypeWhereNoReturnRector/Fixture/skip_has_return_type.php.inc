<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;

class SkipHasReturnType extends TestCase
{
    public function testSomething(): void
    {
    }
}
