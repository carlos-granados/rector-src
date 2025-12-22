<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\UnwrapSprintfOneArgumentRector\Fixture;

class SkipFirstClassCallable
{
    public function run()
    {
        $fn = sprintf(...);
    }
}
