<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

class MethodCallSorting
{
    public function someMethod($first, $second, $third) {}

    public function run()
    {
        $this->someMethod(third: 3, first: 1, second: 2);
        $this->someMethod(second: 2, first: 1);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

class MethodCallSorting
{
    public function someMethod($first, $second, $third) {}

    public function run()
    {
        $this->someMethod(first: 1, second: 2, third: 3);
        $this->someMethod(first: 1, second: 2);
    }
}

?>
