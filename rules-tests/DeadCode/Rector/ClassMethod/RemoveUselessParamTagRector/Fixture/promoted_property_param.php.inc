<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class PromotedPropertyParam
{
    /**
     * @param string $value
     * @param int $count
     */
    public function __construct(
        private string $value,
        private int $count
    ) {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class PromotedPropertyParam
{
    public function __construct(
        private string $value,
        private int $count
    ) {
    }
}

?>
