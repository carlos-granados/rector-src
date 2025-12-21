<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SetTypeToCastRector\Fixture;

final class SkipNamedArguments
{
    public function run($foo)
    {
        settype(value: $foo, type: 'string');
    }
}
