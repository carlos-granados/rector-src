<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InArrayValue
{
    public function run()
    {
        return [
            'class' => __CLASS__,
            'name' => 'test',
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InArrayValue
{
    public function run()
    {
        return [
            'class' => self::class,
            'name' => 'test',
        ];
    }
}

?>
