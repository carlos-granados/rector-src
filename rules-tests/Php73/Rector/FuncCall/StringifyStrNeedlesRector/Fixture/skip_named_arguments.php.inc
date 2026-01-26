<?php

namespace Rector\Tests\Php73\Rector\FuncCall\StringifyStrNeedlesRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        strpos(needle: 5, haystack: '725');
        strpos(haystack: '725', needle: 5);
        stripos(needle: 5, haystack: '725');
    }
}
