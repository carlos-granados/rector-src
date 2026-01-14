<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function arrayAccessCondition(array $data)
{
    $value = $data['key'] ? $data['key'] : 'default';
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function arrayAccessCondition(array $data)
{
    $value = $data['key'] ?: 'default';
}

?>
