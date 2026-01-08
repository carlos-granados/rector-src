<?php

namespace Rector\Tests\DeadCode\Rector\ConstFetch\RemovePhpVersionIdCheckRector\Fixture;

class SmallerOrEqualLeftPast
{
    public function run()
    {
        if (PHP_VERSION_ID <= 70400) {
            return;
        }
        echo 'do something';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ConstFetch\RemovePhpVersionIdCheckRector\Fixture;

class SmallerOrEqualLeftPast
{
    public function run()
    {
        echo 'do something';
    }
}

?>
