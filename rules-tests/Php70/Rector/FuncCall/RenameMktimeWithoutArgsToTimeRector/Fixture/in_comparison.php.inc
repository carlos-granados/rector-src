<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inComparison(int $timestamp)
{
    return $timestamp > mktime();
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inComparison(int $timestamp)
{
    return $timestamp > time();
}

?>
