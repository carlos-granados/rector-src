<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class NeverReturnType
{
    public function throws(): string|int|never
    {
        if (rand(0, 1)) {
            return 'text';
        }

        throw new \Exception('error');
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class NeverReturnType
{
    public function throws(): string
    {
        if (rand(0, 1)) {
            return 'text';
        }

        throw new \Exception('error');
    }
}

?>
