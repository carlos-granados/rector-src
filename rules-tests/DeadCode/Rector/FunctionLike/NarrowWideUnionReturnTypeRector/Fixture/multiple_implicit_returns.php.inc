<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class MultipleImplicitReturns
{
    public function getData(): string|int|null
    {
        if (rand(0, 1)) {
            return 'text';
        }

        if (rand(0, 1)) {
            return;
        }

        if (rand(0, 1)) {
            return;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class MultipleImplicitReturns
{
    public function getData(): ?string
    {
        if (rand(0, 1)) {
            return 'text';
        }

        if (rand(0, 1)) {
            return;
        }

        if (rand(0, 1)) {
            return;
        }
    }
}

?>
