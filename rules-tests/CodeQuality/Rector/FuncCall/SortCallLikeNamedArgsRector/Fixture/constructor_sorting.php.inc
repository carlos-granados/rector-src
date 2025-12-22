<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

class ConstructorSorting
{
    public function __construct(
        private string $first,
        private string $second,
        private string $third
    ) {}
}

$obj = new ConstructorSorting(third: '3', first: '1', second: '2');
$obj2 = new ConstructorSorting(second: '2', first: '1');

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

class ConstructorSorting
{
    public function __construct(
        private string $first,
        private string $second,
        private string $third
    ) {}
}

$obj = new ConstructorSorting(first: '1', second: '2', third: '3');
$obj2 = new ConstructorSorting(first: '1', second: '2');

?>
