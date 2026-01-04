<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SimplifyQuoteEscapeRector\Fixture;

class MultipleEscapedQuotes
{
    public function run()
    {
         $name = "\" Tom \" said \" hello \"";
         $name = '\' Sara \' said \' hi \'';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\String_\SimplifyQuoteEscapeRector\Fixture;

class MultipleEscapedQuotes
{
    public function run()
    {
         $name = '" Tom " said " hello "';
         $name = "' Sara ' said ' hi '";
    }
}

?>
