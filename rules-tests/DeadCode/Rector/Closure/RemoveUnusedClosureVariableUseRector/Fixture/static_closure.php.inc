<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class StaticClosure
{
    public function run($value)
    {
        return static function () use ($value) {
            return 'test';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class StaticClosure
{
    public function run($value)
    {
        return static function () {
            return 'test';
        };
    }
}

?>
