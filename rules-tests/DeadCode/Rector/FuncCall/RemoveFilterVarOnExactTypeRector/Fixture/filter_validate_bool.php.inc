<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class FilterValidateBool
{
    public function run(bool $value)
    {
        return filter_var($value, FILTER_VALIDATE_BOOL);
    }
    
    public function runBoolean(bool $value)
    {
        return filter_var($value, FILTER_VALIDATE_BOOLEAN);
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class FilterValidateBool
{
    public function run(bool $value)
    {
        return $value;
    }
    
    public function runBoolean(bool $value)
    {
        return $value;
    }
}
