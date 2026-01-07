<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class AllParamsUnused
{
    private function doNothing($param1, $param2, $param3)
    {
        return true;
    }

    public function execute()
    {
        return $this->doNothing('a', 'b', 'c');
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class AllParamsUnused
{
    private function doNothing()
    {
        return true;
    }

    public function execute()
    {
        return $this->doNothing();
    }
}

?>
