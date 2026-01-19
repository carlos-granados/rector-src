<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class InIfCondition
{
    public function run($foo)
    {
        if (is_array($foo) || $foo instanceof Traversable) {
            return true;
        }
        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class InIfCondition
{
    public function run($foo)
    {
        if (is_iterable($foo)) {
            return true;
        }
        return false;
    }
}

?>
