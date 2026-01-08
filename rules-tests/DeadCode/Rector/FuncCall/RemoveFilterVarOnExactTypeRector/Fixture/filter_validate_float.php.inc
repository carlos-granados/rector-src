<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class FilterValidateFloat
{
    public function run(float $value)
    {
        return filter_var($value, FILTER_VALIDATE_FLOAT);
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class FilterValidateFloat
{
    public function run(float $value)
    {
        return $value;
    }
}
