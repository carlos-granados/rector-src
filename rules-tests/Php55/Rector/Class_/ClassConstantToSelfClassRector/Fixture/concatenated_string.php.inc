<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class ConcatenatedString
{
    public function run()
    {
        return 'Class name is: ' . __CLASS__;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class ConcatenatedString
{
    public function run()
    {
        return 'Class name is: ' . self::class;
    }
}

?>
