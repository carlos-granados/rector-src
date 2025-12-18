<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class EscapedQuotes
{
    public function run()
    {
        $singleQuote = 'It\'s' . ' great';
        $doubleQuote = "Say \"hello\"" . " there";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class EscapedQuotes
{
    public function run()
    {
        $singleQuote = 'It\'s great';
        $doubleQuote = 'Say "hello" there';
    }
}

?>
