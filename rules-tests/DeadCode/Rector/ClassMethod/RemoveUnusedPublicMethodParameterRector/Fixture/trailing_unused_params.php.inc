<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class TrailingUnusedParams
{
    public function run($used, $unusedTrailing1, $unusedTrailing2)
    {
        echo $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class TrailingUnusedParams
{
    public function run($used)
    {
        echo $used;
    }
}

?>
