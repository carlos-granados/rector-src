<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        $fn = fn() => static::class;

        return $fn();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        $fn = fn() => self::class;

        return $fn();
    }
}

?>
