<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

class ConcreteClass extends AbstractParentClass
{
    public function abstractMethod()
    {
    }
}

abstract class AbstractParentClass
{
    abstract protected function abstractMethod();
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

class ConcreteClass extends AbstractParentClass
{
    protected function abstractMethod()
    {
    }
}

abstract class AbstractParentClass
{
    abstract protected function abstractMethod();
}

?>
