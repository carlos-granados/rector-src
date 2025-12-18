<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class ReversedOrder
{
    public function demo($someVariable): bool
    {
        if ('a' === $someVariable || 'b' === $someVariable || 'c' === $someVariable) {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class ReversedOrder
{
    public function demo($someVariable): bool
    {
        if (in_array($someVariable, ['a', 'b', 'c'], true)) {
            return true;
        }

        return false;
    }
}

?>
