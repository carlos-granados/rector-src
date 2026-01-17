<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inArray()
{
    return [
        'current' => mktime(),
        'specific' => mktime(12, 0, 0),
    ];
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inArray()
{
    return [
        'current' => time(),
        'specific' => mktime(12, 0, 0),
    ];
}

?>
