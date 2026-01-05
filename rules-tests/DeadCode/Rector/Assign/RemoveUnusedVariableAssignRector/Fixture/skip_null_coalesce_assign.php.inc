<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedVariableAssignRector\Fixture;

class SkipNullCoalesceAssign
{
    public function run($params)
    {
        $value ??= 'default';
    }
}

?>
