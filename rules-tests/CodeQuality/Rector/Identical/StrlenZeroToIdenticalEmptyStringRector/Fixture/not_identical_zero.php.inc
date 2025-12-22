<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\StrlenZeroToIdenticalEmptyStringRector\Fixture;

class NotIdenticalZero
{
    public function run(string $value)
    {
        // NotIdentical should also be transformed
        $notEmpty = strlen($value) !== 0;
        $notEmpty = 0 !== strlen($value);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\StrlenZeroToIdenticalEmptyStringRector\Fixture;

class NotIdenticalZero
{
    public function run(string $value)
    {
        // NotIdentical should also be transformed
        $notEmpty = $value !== '';
        $notEmpty = $value !== '';
    }
}

?>
