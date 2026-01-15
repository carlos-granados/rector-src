<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class AsFunctionArgument
{
    public function run()
    {
        return sprintf('Class: %s', static::class);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class AsFunctionArgument
{
    public function run()
    {
        return sprintf('Class: %s', self::class);
    }
}

?>
