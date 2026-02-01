<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;

class SkipHasReturnValue extends TestCase
{
    public function testSomething()
    {
        return 'value';
    }
}
