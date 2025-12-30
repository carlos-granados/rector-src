<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

final class SkipFinalClass extends ParentClassForFinal
{
    public function run()
    {
    }
}

class ParentClassForFinal
{
    protected function run()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

final class SkipFinalClass extends ParentClassForFinal
{
    protected function run()
    {
    }
}

class ParentClassForFinal
{
    protected function run()
    {
    }
}

?>
