<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

use Attribute;

#[Attribute]
class SomeAttribute {}

class ParamWithAttribute
{
    /**
     * @param string $value
     */
    public function run(#[SomeAttribute] string $value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

use Attribute;

#[Attribute]
class SomeAttribute {}

class ParamWithAttribute
{
    public function run(#[SomeAttribute] string $value)
    {
    }
}

?>
