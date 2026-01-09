<?php

namespace Rector\Tests\DeadCode\Rector\If_\UnwrapFutureCompatibleIfPhpVersionRector\Fixture;

class LessOrEqualOperator
{
    public function run()
    {
        // current PHP: 10.0
        if (version_compare(PHP_VERSION, '7.2', '<=')) {
            return 'is PHP 7.2-';
        } else {
            return 'is PHP 7.3+';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\UnwrapFutureCompatibleIfPhpVersionRector\Fixture;

class LessOrEqualOperator
{
    public function run()
    {
        // current PHP: 10.0
        return 'is PHP 7.3+';
    }
}

?>
