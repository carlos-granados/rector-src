<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InMatch
{
    public function run(int $type)
    {
        return match ($type) {
            1 => static::class,
            default => 'Unknown',
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InMatch
{
    public function run(int $type)
    {
        return match ($type) {
            1 => self::class,
            default => 'Unknown',
        };
    }
}

?>
