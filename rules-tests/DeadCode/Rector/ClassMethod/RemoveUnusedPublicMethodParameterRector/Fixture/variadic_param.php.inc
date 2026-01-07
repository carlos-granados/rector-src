<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class VariadicParam
{
    public function run($used, ...$unusedVariadic)
    {
        echo $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class VariadicParam
{
    public function run($used)
    {
        echo $used;
    }
}

?>
