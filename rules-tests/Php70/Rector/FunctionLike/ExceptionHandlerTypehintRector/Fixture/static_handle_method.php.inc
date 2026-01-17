<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class StaticHandler
{
    public static function handle(\Exception $exception)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FunctionLike\ExceptionHandlerTypehintRector\Fixture;

class StaticHandler
{
    public static function handle(\Throwable $exception)
    {
    }
}

?>
