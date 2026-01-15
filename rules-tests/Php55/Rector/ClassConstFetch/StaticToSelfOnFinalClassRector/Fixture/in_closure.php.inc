<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function () {
            return static::class;
        };

        return $closure();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function () {
            return self::class;
        };

        return $closure();
    }
}

?>
