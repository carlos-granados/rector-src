<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class ParamsWithDefaultValues
{
    private function calculate($used, $unused = 10, $alsoUnused = 'default')
    {
        return $used * 2;
    }

    public function execute()
    {
        return $this->calculate(5, 20, 'test');
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class ParamsWithDefaultValues
{
    private function calculate($used)
    {
        return $used * 2;
    }

    public function execute()
    {
        return $this->calculate(5);
    }
}

?>
