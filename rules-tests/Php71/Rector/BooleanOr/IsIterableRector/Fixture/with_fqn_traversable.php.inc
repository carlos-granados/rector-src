<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

class WithFqnTraversable
{
    public function run($foo)
    {
        return is_array($foo) || $foo instanceof \Traversable;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

class WithFqnTraversable
{
    public function run($foo)
    {
        return is_iterable($foo);
    }
}

?>
