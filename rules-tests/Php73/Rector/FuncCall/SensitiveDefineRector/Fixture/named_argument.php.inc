<?php

namespace Rector\Tests\Php73\Rector\FuncCall\SensitiveDefineRector\Fixture;

function namedArgument()
{
    define('FOO', 42, case_insensitive: true);
}

?>
-----
<?php

namespace Rector\Tests\Php73\Rector\FuncCall\SensitiveDefineRector\Fixture;

function namedArgument()
{
    define('FOO', 42);
}

?>
