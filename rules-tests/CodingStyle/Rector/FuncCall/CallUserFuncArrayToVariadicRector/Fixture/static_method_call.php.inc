<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncArrayToVariadicRector\Fixture;

class StaticMethodCall
{
    public function run($items)
    {
        // Static method call with string class name - not supported by ArrayCallableToMethodCallFactory
        // Factory only handles instance method calls (PropertyFetch, Variable)
        call_user_func_array(['SomeClass', 'someMethod'], $items);
    }
}
