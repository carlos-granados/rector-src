<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => __CLASS__;

        return $fn();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => self::class;

        return $fn();
    }
}

?>
