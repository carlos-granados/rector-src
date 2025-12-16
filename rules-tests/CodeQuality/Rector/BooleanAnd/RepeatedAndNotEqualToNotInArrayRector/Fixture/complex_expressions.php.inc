<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class ComplexExpressions
{
    public function demoProperty($obj): bool
    {
        if ($obj->prop !== 'a' && $obj->prop !== 'b' && $obj->prop !== 'c') {
            return true;
        }

        return false;
    }

    public function demoArray($arr): bool
    {
        if ($arr['key'] !== 1 && $arr['key'] !== 2 && $arr['key'] !== 3) {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class ComplexExpressions
{
    public function demoProperty($obj): bool
    {
        if (!in_array($obj->prop, ['a', 'b', 'c'], true)) {
            return true;
        }

        return false;
    }

    public function demoArray($arr): bool
    {
        if (!in_array($arr['key'], [1, 2, 3], true)) {
            return true;
        }

        return false;
    }
}

?>
