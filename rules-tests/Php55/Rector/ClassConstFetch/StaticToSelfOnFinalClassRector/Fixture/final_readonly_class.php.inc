<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final readonly class FinalReadonlyClass
{
    public function run()
    {
        return static::class;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final readonly class FinalReadonlyClass
{
    public function run()
    {
        return self::class;
    }
}

?>
