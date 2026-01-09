<?php

namespace Rector\Tests\DeadCode\Rector\If_\UnwrapFutureCompatibleIfPhpVersionRector\Fixture;

class NoElseBranch
{
    public function run()
    {
        // current PHP: 10.0
        if (version_compare(PHP_VERSION, '7.2', '<')) {
            return 'is PHP 7.1-';
        }

        return 'continue';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\UnwrapFutureCompatibleIfPhpVersionRector\Fixture;

class NoElseBranch
{
    public function run()
    {
        return 'continue';
    }
}

?>
