<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class SkipDifferentFormat
{
    public function run()
    {
        $value = sprintf('%d', '123');
        $value2 = sprintf('prefix_%s', 'hello');
        $value3 = sprintf('%s_suffix', 'hello');
    }
}
