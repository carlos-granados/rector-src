<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function skipFirstClassCallable()
{
    $callable = call_user_method(...);
}
