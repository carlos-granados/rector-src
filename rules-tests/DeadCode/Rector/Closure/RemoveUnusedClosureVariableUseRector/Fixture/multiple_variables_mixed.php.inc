<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class MultipleVariablesMixed
{
    public function run($used, $unused1, $unused2)
    {
        return function () use ($used, $unused1, $unused2) {
            return $used;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class MultipleVariablesMixed
{
    public function run($used, $unused1, $unused2)
    {
        return function () use ($used) {
            return $used;
        };
    }
}

?>
