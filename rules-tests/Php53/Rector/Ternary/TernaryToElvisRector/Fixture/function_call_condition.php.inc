<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function functionCallCondition()
{
    $value = getValue() ? getValue() : 'default';
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function functionCallCondition()
{
    $value = getValue() ?: 'default';
}

?>
