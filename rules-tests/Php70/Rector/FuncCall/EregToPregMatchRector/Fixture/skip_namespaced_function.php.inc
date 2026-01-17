<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function skipNamespacedFunction()
{
    \SomeNamespace\ereg('pattern', 'text');
    \SomeNamespace\split('pattern', 'text');
}

?>
