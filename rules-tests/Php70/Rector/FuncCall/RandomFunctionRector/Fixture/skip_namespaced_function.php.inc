<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function skipNamespacedFunction()
{
    \SomeNamespace\rand(1, 10);
    \SomeNamespace\srand(42);
    \SomeNamespace\getrandmax();
}

?>
