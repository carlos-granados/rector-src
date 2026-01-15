<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            return __CLASS__;
        };

        return $closure();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            return self::class;
        };

        return $closure();
    }
}

?>
