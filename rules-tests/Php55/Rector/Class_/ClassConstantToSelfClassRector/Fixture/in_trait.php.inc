<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

trait InTrait
{
    public function getClassName()
    {
        return __CLASS__;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

trait InTrait
{
    public function getClassName()
    {
        return self::class;
    }
}

?>
