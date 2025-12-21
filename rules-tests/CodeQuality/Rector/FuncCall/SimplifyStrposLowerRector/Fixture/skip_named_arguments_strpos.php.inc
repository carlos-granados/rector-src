<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyStrposLowerRector\Fixture;

final class SkipNamedArgumentsStrpos
{
    public function run()
    {
        $string = 'hey';
        strpos(haystack: strtolower($string), needle: 'find-me');
    }
}
