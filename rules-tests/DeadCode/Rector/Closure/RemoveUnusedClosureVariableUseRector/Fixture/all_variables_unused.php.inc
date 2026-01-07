<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class AllVariablesUnused
{
    public function run($var1, $var2, $var3)
    {
        return function () use ($var1, $var2, $var3) {
            return 'test';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class AllVariablesUnused
{
    public function run($var1, $var2, $var3)
    {
        return function () {
            return 'test';
        };
    }
}

?>
