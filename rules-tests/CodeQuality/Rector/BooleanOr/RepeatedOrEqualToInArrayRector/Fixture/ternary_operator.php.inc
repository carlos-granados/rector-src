<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class TernaryOperator
{
    public function demo($someVariable): string
    {
        return $someVariable === 'a' || $someVariable === 'b' || $someVariable === 'c' ? 'found' : 'not found';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class TernaryOperator
{
    public function demo($someVariable): string
    {
        return in_array($someVariable, ['a', 'b', 'c'], true) ? 'found' : 'not found';
    }
}

?>
