<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function skipAlreadyElvis()
{
    $value = $a ?: 'default';
}
