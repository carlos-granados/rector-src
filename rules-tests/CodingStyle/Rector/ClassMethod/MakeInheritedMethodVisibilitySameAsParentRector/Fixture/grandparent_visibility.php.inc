<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

class GrandChild extends MiddleParent
{
    public function run()
    {
    }
}

class MiddleParent extends GrandParent
{
}

class GrandParent
{
    protected function run()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

class GrandChild extends MiddleParent
{
    protected function run()
    {
    }
}

class MiddleParent extends GrandParent
{
}

class GrandParent
{
    protected function run()
    {
    }
}

?>
