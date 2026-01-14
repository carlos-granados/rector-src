<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function nestedTernaryCondition()
{
    $inner = $a ? $a : $b;
    $outer = $inner ? $inner : $c;
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function nestedTernaryCondition()
{
    $inner = $a ?: $b;
    $outer = $inner ?: $c;
}

?>
