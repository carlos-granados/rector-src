<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function skipNamespacedFunction()
{
    \SomeNamespace\mktime();
}
