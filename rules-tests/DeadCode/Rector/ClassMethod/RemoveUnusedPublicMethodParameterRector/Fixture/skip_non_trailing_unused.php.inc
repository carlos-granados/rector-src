<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

final class SkipNonTrailingUnused
{
    public function run($unusedFirst, $used)
    {
        echo $used;
    }
}

?>
