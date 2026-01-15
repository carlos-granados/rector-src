<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class MultipleOccurrences
{
    public function run()
    {
        echo static::class;
        return static::class;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class MultipleOccurrences
{
    public function run()
    {
        echo self::class;
        return self::class;
    }
}

?>
