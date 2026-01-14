<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function stringConcatenationCondition()
{
    $value = ($a . $b) ? ($a . $b) : 'empty';
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function stringConcatenationCondition()
{
    $value = $a . $b ?: 'empty';
}

?>
