<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ClosureFromCallableToFirstClassCallableRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        // Named arguments should be skipped
        \Closure::fromCallable(callback: 'trim');
        \Closure::fromCallable(callback: [$this, 'method']);
    }
}
