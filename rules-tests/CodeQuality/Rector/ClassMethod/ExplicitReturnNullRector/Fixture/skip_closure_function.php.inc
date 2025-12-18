<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\ExplicitReturnNullRector\Fixture;

class SkipClosureFunction
{
    public function run()
    {
        // Closures inside methods are not affected by this rule
        $closure = function (int $number) {
            if ($number > 50) {
                return 'yes';
            }
        };

        return $closure;
    }
}
