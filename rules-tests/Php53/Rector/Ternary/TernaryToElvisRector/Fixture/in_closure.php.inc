<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function inClosure()
{
    return function ($a) {
        return $a ? $a : 'default';
    };
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function inClosure()
{
    return function ($a) {
        return $a ?: 'default';
    };
}

?>
