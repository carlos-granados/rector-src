<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

function wrapToPreventPhpStanCallingMethods()
{
    $a = 1;
    1;
    foo();
    2;
    bar();
    3;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

function wrapToPreventPhpStanCallingMethods()
{
    $a = 1;
    foo();
    bar();
}

?>
