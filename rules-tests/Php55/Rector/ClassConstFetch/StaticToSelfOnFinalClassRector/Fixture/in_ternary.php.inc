<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? static::class : 'Unknown';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? self::class : 'Unknown';
    }
}

?>
