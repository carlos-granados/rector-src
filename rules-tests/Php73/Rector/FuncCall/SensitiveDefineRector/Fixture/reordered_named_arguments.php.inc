<?php

namespace Rector\Tests\Php73\Rector\FuncCall\SensitiveDefineRector\Fixture;

function reorderedNamedArguments()
{
    define(case_insensitive: true, constant_name: 'FOO', value: 42);
}

?>
-----
<?php

namespace Rector\Tests\Php73\Rector\FuncCall\SensitiveDefineRector\Fixture;

function reorderedNamedArguments()
{
    define(constant_name: 'FOO', value: 42);
}

?>
