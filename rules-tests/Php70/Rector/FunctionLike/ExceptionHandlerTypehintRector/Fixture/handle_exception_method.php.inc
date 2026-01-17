<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class ErrorProcessor
{
    public function handleException(\Exception $exception)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class ErrorProcessor
{
    public function handleException(\Throwable $exception)
    {
    }
}

?>
