<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

function mixed_positional_named($first, $second, $third, $fourth) {}

mixed_positional_named('a', 'b', fourth: 'd', third: 'c');
mixed_positional_named('a', fourth: 'd', third: 'c');

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

function mixed_positional_named($first, $second, $third, $fourth) {}

mixed_positional_named('a', 'b', third: 'c', fourth: 'd');
mixed_positional_named('a', third: 'c', fourth: 'd');

?>
