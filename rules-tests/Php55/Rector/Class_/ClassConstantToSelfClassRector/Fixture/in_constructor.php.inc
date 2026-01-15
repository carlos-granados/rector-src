<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = __CLASS__;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = self::class;
    }
}

?>
