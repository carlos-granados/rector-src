<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

$fn = fn() => mktime();

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

$fn = fn() => time();

?>
