<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

function exceptionHandler(\Exception $exception)
{
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

function exceptionHandler(\Throwable $exception)
{
}

?>
