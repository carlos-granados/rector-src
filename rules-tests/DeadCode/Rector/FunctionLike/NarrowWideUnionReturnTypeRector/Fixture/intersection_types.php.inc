<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

interface Alpha {}
interface Beta {}

final class IntersectionTypes
{
    public function getObject(): (Alpha&Beta)|string|int
    {
        if (rand(0, 1)) {
            return 'text';
        }

        return new class implements Alpha, Beta {};
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

interface Alpha {}
interface Beta {}

final class IntersectionTypes
{
    public function getObject(): (Alpha&Beta)|string|int
    {
        if (rand(0, 1)) {
            return 'text';
        }

        return new class implements Alpha, Beta {};
    }
}

?>
