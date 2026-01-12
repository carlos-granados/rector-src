<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class ExitStatement
{
    public function run($value)
    {
        if ($value) {
            exit();
        } else {
            return 10;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class ExitStatement
{
    public function run($value)
    {
        if ($value) {
            exit();
        }
        return 10;
    }
}

?>
