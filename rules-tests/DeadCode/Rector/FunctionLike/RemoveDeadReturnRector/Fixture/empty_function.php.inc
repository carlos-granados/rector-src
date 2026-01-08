<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class EmptyFunction
{
    public function run()
    {
        return;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class EmptyFunction
{
    public function run()
    {
    }
}

?>
