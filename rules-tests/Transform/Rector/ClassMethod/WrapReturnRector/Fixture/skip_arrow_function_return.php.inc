<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class SkipArrowFunctionReturn extends SomeReturnClass
{
    public function getItem()
    {
        $arrow = fn() => 1;

        return $arrow();
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class SkipArrowFunctionReturn extends SomeReturnClass
{
    public function getItem()
    {
        $arrow = fn() => 1;

        return [$arrow()];
    }
}

?>
