<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class DoubleQuotes
{
    public function run()
    {
        $name = "Hello" . " World";
        $mixed = 'Single' . "Double";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class DoubleQuotes
{
    public function run()
    {
        $name = 'Hello World';
        $mixed = 'SingleDouble';
    }
}

?>
