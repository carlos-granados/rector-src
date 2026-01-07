<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

use Attribute;

#[Attribute]
class ParamAttribute
{
}

final class TrailingWithAttribute
{
    public function run($used, #[ParamAttribute] $unusedTrailing)
    {
        echo $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

use Attribute;

#[Attribute]
class ParamAttribute
{
}

final class TrailingWithAttribute
{
    public function run($used)
    {
        echo $used;
    }
}

?>
