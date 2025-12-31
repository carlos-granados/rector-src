<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ClosureFromCallableToFirstClassCallableRector\Fixture;

class PropertyFetchCallable
{
    private $obj;

    public function run()
    {
        // PropertyFetch not supported - only Variable is handled
        \Closure::fromCallable([$this->obj, 'method']);
    }
}
