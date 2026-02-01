<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;
use PHPUnit\Framework\Attributes\Test;

class WithTestAttribute extends TestCase
{
    #[Test]
    public function itShouldWork()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\AddTestsVoidReturnTypeWhereNoReturnRector\Fixture;

use PHPUnit\Framework\TestCase;
use PHPUnit\Framework\Attributes\Test;

class WithTestAttribute extends TestCase
{
    #[Test]
    public function itShouldWork(): void
    {
    }
}

?>
