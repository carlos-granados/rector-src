<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\UnwrapSprintfOneArgumentRector\Fixture;

class SkipNamedArgument
{
    public function run()
    {
        echo sprintf(format: 'value');
    }
}
