<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class AnonymousClass
{
    public function getAnon(): object|string|int
    {
        if (rand(0, 1)) {
            return new class {};
        }

        return 'text';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class AnonymousClass
{
    public function getAnon(): object|string
    {
        if (rand(0, 1)) {
            return new class {};
        }

        return 'text';
    }
}

?>
