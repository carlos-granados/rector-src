<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class ConcatenatedString
{
    public function run()
    {
        return 'Class name is: ' . static::class;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class ConcatenatedString
{
    public function run()
    {
        return 'Class name is: ' . self::class;
    }
}

?>
