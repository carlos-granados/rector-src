<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class StaticMethod
{
    public static function getData(): string|int|bool
    {
        if (rand(0, 1)) {
            return 'text';
        }

        return 42;
    }

    private static function processData(): string|array|object
    {
        if (rand(0, 1)) {
            return 'processed';
        }

        return ['data' => 'value'];
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

final class StaticMethod
{
    public static function getData(): string|int
    {
        if (rand(0, 1)) {
            return 'text';
        }

        return 42;
    }

    private static function processData(): string|array
    {
        if (rand(0, 1)) {
            return 'processed';
        }

        return ['data' => 'value'];
    }
}

?>
