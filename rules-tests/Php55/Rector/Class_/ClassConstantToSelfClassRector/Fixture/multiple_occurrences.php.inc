<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class MultipleOccurrences
{
    public function run()
    {
        echo __CLASS__;
        return __CLASS__;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class MultipleOccurrences
{
    public function run()
    {
        echo self::class;
        return self::class;
    }
}

?>
