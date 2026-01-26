<?php

namespace Rector\Tests\Php73\Rector\FuncCall\SensitiveDefineRector\Fixture;

function skipNoThirdArgument()
{
    define('FOO', 42);
}
