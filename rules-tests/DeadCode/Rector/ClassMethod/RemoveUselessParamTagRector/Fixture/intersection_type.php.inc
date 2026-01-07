<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

interface FirstInterface {}
interface SecondInterface {}

class IntersectionType
{
    /**
     * @param FirstInterface&SecondInterface $value
     */
    public function run(FirstInterface&SecondInterface $value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

interface FirstInterface {}
interface SecondInterface {}

class IntersectionType
{
    public function run(FirstInterface&SecondInterface $value)
    {
    }
}

?>
