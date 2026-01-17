<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inTernary(bool $useCurrentTime)
{
    return $useCurrentTime ? mktime() : mktime(12, 0, 0);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inTernary(bool $useCurrentTime)
{
    return $useCurrentTime ? time() : mktime(12, 0, 0);
}

?>
