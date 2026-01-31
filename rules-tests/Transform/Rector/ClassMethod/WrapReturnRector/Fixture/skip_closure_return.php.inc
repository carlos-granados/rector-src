<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class SkipClosureReturn extends SomeReturnClass
{
    public function getItem()
    {
        $closure = function () {
            return 1;
        };

        return $closure();
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class SkipClosureReturn extends SomeReturnClass
{
    public function getItem()
    {
        $closure = function () {
            return 1;
        };

        return [$closure()];
    }
}

?>
