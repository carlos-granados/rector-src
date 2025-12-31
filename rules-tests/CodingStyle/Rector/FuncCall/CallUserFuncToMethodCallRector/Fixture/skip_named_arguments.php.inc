<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncToMethodCallRector\Fixture;

final class SkipNamedArguments
{
    private \stdClass $property;

    public function run($args)
    {
        // Named arguments should be skipped
        $result = call_user_func(callback: [$this->property, 'method'], args: $args);
    }
}
