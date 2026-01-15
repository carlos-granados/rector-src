<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? __CLASS__ : 'Unknown';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? self::class : 'Unknown';
    }
}

?>
