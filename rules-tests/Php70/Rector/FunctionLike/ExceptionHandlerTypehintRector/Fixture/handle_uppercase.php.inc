<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

function HANDLE_EXCEPTION(\Exception $exception)
{
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

function HANDLE_EXCEPTION(\Throwable $exception)
{
}

?>
