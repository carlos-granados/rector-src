<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class SkipNamedArguments
{
    public function run()
    {
        $welcome = 'hello';
        $value = sprintf(format: '%s', values: $welcome);
    }
}
