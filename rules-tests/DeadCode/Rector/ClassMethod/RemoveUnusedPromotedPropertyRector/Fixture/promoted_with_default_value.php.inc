<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class PromotedWithDefaultValue
{
    public function __construct(
        private string $unusedWithDefault = 'default',
        private string $usedWithDefault = 'used'
    ) {
    }

    public function getUsed()
    {
        return $this->usedWithDefault;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class PromotedWithDefaultValue
{
    public function __construct(
        private string $usedWithDefault = 'used'
    ) {
    }

    public function getUsed()
    {
        return $this->usedWithDefault;
    }
}

?>
