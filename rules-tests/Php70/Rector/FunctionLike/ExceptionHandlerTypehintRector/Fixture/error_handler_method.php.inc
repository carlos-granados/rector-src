<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class ErrorManager
{
    public function errorHandler(\Exception $exception)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class ErrorManager
{
    public function errorHandler(\Throwable $exception)
    {
    }
}

?>
