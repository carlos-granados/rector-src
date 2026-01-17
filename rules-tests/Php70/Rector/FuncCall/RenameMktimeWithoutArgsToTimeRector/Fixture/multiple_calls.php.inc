<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function multipleCalls()
{
    $time1 = mktime();
    $time2 = mktime();
    $time3 = mktime(1, 2, 3);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function multipleCalls()
{
    $time1 = time();
    $time2 = time();
    $time3 = mktime(1, 2, 3);
}

?>
