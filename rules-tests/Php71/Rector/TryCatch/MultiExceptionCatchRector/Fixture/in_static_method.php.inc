<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class InStaticMethod
{
    public static function run()
    {
        try {
            self::doSomething();
        } catch (\RuntimeException $e) {
            self::handleError($e);
        } catch (\InvalidArgumentException $e) {
            self::handleError($e);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class InStaticMethod
{
    public static function run()
    {
        try {
            self::doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            self::handleError($e);
        }
    }
}

?>
