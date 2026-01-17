<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class PrivateHandler
{
    private function handleError(\Exception $exception)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class PrivateHandler
{
    private function handleError(\Throwable $exception)
    {
    }
}

?>
