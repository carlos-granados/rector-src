<?php

namespace Rector\Tests\DeadCode\Rector\ClassConst\RemoveUnusedPrivateClassConstantRector\Fixture;

class MultipleUnusedConstants
{
    private const UNUSED_ONE = 'dead';
    private const UNUSED_TWO = 'dead';
    private const USED_ONE = 'alive';

    public function run()
    {
        return self::USED_ONE;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassConst\RemoveUnusedPrivateClassConstantRector\Fixture;

class MultipleUnusedConstants
{
    private const USED_ONE = 'alive';

    public function run()
    {
        return self::USED_ONE;
    }
}

?>
