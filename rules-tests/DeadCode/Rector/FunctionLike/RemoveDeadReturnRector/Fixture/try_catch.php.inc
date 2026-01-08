<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class TryCatch
{
    public function run()
    {
        try {
            echo 'test';
        } catch (\Exception $e) {
            return;
        }
        
        return;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class TryCatch
{
    public function run()
    {
        try {
            echo 'test';
        } catch (\Exception $e) {
            return;
        }
    }
}

?>
