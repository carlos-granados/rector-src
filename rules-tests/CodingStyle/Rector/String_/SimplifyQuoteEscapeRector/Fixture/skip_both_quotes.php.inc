<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SimplifyQuoteEscapeRector\Fixture;

class SkipBothQuotes
{
    public function run()
    {
         // Has both quotes, should not transform
         $name = "He said: \" I'm fine \"";
         $name = 'She said: \' I"m fine \'';
    }
}
