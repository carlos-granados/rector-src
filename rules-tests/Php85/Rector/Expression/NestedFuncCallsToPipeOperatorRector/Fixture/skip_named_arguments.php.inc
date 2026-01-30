<?php

namespace Rector\Tests\Php85\Rector\Expression\NestedFuncCallsToPipeOperatorRector\Fixture;

final class SkipNamedArguments
{
    public function run()
    {
        $result = strtolower(string: trim($input));
    }
}
