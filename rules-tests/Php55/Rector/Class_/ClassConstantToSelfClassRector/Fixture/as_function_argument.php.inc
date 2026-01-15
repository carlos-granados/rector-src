<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class AsFunctionArgument
{
    public function run()
    {
        return sprintf('Class: %s', __CLASS__);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class AsFunctionArgument
{
    public function run()
    {
        return sprintf('Class: %s', self::class);
    }
}

?>
