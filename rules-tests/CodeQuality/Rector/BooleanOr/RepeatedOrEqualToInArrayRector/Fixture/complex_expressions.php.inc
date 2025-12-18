<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class ComplexExpressions
{
    public function demo($obj): bool
    {
        if ($obj->prop === 'a' || $obj->prop === 'b' || $obj->prop === 'c') {
            return true;
        }

        return false;
    }

    public function methodCall($obj): bool
    {
        if ($obj->getValue() === 'a' || $obj->getValue() === 'b' || $obj->getValue() === 'c') {
            return true;
        }

        return false;
    }

    public function arrayAccess(array $arr): bool
    {
        if ($arr['key'] === 'a' || $arr['key'] === 'b' || $arr['key'] === 'c') {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class ComplexExpressions
{
    public function demo($obj): bool
    {
        if (in_array($obj->prop, ['a', 'b', 'c'], true)) {
            return true;
        }

        return false;
    }

    public function methodCall($obj): bool
    {
        if (in_array($obj->getValue(), ['a', 'b', 'c'], true)) {
            return true;
        }

        return false;
    }

    public function arrayAccess(array $arr): bool
    {
        if (in_array($arr['key'], ['a', 'b', 'c'], true)) {
            return true;
        }

        return false;
    }
}

?>
