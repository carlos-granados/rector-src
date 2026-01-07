<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

$obj = new class {
    /**
     * @return string
     */
    public function getName(): string
    {
        return 'test';
    }
};

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

$obj = new class {
    public function getName(): string
    {
        return 'test';
    }
};

?>
