<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class MultiplePromotedProperties
{
    public function __construct(
        private $unusedFirst,
        private $usedMiddle,
        private $unusedLast
    ) {
    }

    public function getUsed()
    {
        return $this->usedMiddle;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class MultiplePromotedProperties
{
    public function __construct(
        private $usedMiddle
    ) {
    }

    public function getUsed()
    {
        return $this->usedMiddle;
    }
}

?>
