<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class NestedReturn extends SomeReturnClass
{
    public function getItem()
    {
        if (true) {
            return 1;
        }

        return 2;
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class NestedReturn extends SomeReturnClass
{
    public function getItem()
    {
        if (true) {
            return [1];
        }

        return [2];
    }
}

?>
