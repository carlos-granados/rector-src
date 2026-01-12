<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class DieStatement
{
    public function run($value)
    {
        if ($value) {
            die('error');
        } else {
            return 10;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class DieStatement
{
    public function run($value)
    {
        if ($value) {
            die('error');
        }
        return 10;
    }
}

?>
