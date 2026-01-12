<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class ExitWithCode
{
    public function run($error)
    {
        if ($error) {
            exit(1);
        } else {
            return 'success';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class ExitWithCode
{
    public function run($error)
    {
        if ($error) {
            exit(1);
        }
        return 'success';
    }
}

?>
