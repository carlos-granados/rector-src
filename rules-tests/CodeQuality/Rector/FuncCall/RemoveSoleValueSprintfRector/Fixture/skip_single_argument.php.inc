<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class SkipSingleArgument
{
    public function run()
    {
        $value = sprintf('%s');
    }
}
