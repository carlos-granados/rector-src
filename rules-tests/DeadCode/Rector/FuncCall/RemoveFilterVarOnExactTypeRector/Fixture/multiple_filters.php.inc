<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class MultipleFilters
{
    public function run(int $int, float $float, bool $bool)
    {
        $a = filter_var($int, FILTER_VALIDATE_INT);
        $b = filter_var($float, FILTER_VALIDATE_FLOAT);
        $c = filter_var($bool, FILTER_VALIDATE_BOOL);
        return [$a, $b, $c];
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class MultipleFilters
{
    public function run(int $int, float $float, bool $bool)
    {
        $a = $int;
        $b = $float;
        $c = $bool;
        return [$a, $b, $c];
    }
}
