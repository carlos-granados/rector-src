<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function inArrowFunction()
{
    return fn($a) => $a ? $a : 'default';
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function inArrowFunction()
{
    return fn($a) => $a ?: 'default';
}

?>
