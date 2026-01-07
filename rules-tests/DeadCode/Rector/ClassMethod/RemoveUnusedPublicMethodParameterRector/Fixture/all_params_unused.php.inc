<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class AllParamsUnused
{
    public function run($a, $b, $c)
    {
        echo 'nothing';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class AllParamsUnused
{
    public function run()
    {
        echo 'nothing';
    }
}

?>
