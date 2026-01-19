<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class ReversedOrder
{
    public function run($foo)
    {
        return $foo instanceof Traversable || is_array($foo);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class ReversedOrder
{
    public function run($foo)
    {
        return is_iterable($foo);
    }
}

?>
