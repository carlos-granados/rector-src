<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class SkipThreeArguments
{
    public function run()
    {
        $value = sprintf('%s %s', 'hello', 'world');
    }
}
