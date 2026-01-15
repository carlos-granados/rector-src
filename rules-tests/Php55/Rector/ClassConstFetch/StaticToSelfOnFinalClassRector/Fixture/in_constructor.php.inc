<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = static::class;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

final class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = self::class;
    }
}

?>
