<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SimplifyQuoteEscapeRector\Fixture;

class SkipDollarSign
{
    public function run()
    {
         // Single quote with dollar sign - should not convert to double quote
         $name = 'Price: \' $100';
    }
}
