<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\ExplicitReturnNullRector\Fixture;

class SkipArrowFunction
{
    public function run()
    {
        $arrow = fn(int $number) => $number > 50 ? 'yes' : null;

        return $arrow;
    }
}
