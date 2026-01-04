<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SimplifyQuoteEscapeRector\Fixture;

class SkipBackslash
{
    public function run()
    {
         // Single quote with backslash - should not convert to double quote
         $name = 'Path: \' C:\\\\Users';
    }
}
