<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

function wrapToPreventPhpStanCallingMethods()
{
    $a = foo(bar());
    foo(bar(), baz());
    foo(bar(baz()));
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

function wrapToPreventPhpStanCallingMethods()
{
    $a = foo(bar());
    foo(bar(), baz());
    foo(bar(baz()));
}

?>
