<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class SkipFirstClassCallable
{
    public function run()
    {
        $callback = filter_var(...);
        return $callback;
    }
}
