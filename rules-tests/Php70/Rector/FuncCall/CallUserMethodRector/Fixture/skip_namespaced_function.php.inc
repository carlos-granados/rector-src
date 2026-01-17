<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function call_user_method($method, $obj, ...$args)
{
    // custom implementation
    return null;
}

function skipNamespacedFunction()
{
    // This calls the namespaced version, which should be skipped
    $obj = new stdClass();
    \Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture\call_user_method('method', $obj);
}

?>
