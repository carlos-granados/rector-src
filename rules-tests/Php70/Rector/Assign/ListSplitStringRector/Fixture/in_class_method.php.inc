<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

class SomeClass
{
    public function someMethod(): void
    {
        $string = 'abc';
        list($a, $b) = $string;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

class SomeClass
{
    public function someMethod(): void
    {
        $string = 'abc';
        list($a, $b) = str_split($string);
    }
}

?>
