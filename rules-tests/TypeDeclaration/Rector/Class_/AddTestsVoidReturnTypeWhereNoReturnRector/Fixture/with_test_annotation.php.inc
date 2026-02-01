<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;

class WithTestAnnotation extends TestCase
{
    /**
     * @test
     */
    public function itShouldWork()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;

class WithTestAnnotation extends TestCase
{
    /**
     * @test
     */
    public function itShouldWork(): void
    {
    }
}

?>
