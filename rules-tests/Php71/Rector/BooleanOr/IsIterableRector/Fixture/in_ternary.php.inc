<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class InTernary
{
    public function run($foo)
    {
        return (is_array($foo) || $foo instanceof Traversable) ? 'yes' : 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class InTernary
{
    public function run($foo)
    {
        return (is_iterable($foo)) ? 'yes' : 'no';
    }
}

?>
