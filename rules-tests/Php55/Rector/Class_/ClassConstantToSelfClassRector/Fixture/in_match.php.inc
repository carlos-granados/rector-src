<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InMatch
{
    public function run(int $type)
    {
        return match ($type) {
            1 => __CLASS__,
            default => 'Unknown',
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\Class_\ClassConstantToSelfClassRector\Fixture;

class InMatch
{
    public function run(int $type)
    {
        return match ($type) {
            1 => self::class,
            default => 'Unknown',
        };
    }
}

?>
