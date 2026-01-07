<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class ByReferenceUnused
{
    public function run($value)
    {
        return function () use (&$value) {
            return 'test';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class ByReferenceUnused
{
    public function run($value)
    {
        return function () {
            return 'test';
        };
    }
}

?>
