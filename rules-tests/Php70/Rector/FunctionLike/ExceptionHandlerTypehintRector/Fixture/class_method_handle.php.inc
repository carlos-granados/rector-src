<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class ExceptionProcessor
{
    public function handle(\Exception $exception)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class ExceptionProcessor
{
    public function handle(\Throwable $exception)
    {
    }
}

?>
