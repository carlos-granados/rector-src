<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class TrailingWithDefaultValue
{
    public function run($used, $unusedTrailing = 'default')
    {
        echo $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class TrailingWithDefaultValue
{
    public function run($used)
    {
        echo $used;
    }
}

?>
