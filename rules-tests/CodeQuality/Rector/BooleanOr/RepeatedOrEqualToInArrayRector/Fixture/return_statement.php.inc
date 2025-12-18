<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class ReturnStatement
{
    public function demo($someVariable): bool
    {
        return $someVariable === 'a' || $someVariable === 'b' || $someVariable === 'c';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class ReturnStatement
{
    public function demo($someVariable): bool
    {
        return in_array($someVariable, ['a', 'b', 'c'], true);
    }
}

?>
