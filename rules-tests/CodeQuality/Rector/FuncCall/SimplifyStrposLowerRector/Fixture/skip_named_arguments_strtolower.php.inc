<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyStrposLowerRector\Fixture;

final class SkipNamedArgumentsStrtolower
{
    public function run()
    {
        $string = 'hey';
        strpos(strtolower(string: $string), 'find-me');
    }
}
