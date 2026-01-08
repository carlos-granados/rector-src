<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class ArrowFunction
{
    public function run()
    {
        $callback = fn($x) => $x * 2;
        
        return;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class ArrowFunction
{
    public function run()
    {
        $callback = fn($x) => $x * 2;
    }
}

?>
