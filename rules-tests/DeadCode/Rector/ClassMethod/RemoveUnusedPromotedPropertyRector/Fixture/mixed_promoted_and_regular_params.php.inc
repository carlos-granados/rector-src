<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class MixedPromotedAndRegularParams
{
    public function __construct(
        private $unusedPromoted,
        string $regularParam,
        private $usedPromoted
    ) {
        echo $regularParam;
    }

    public function getUsed()
    {
        return $this->usedPromoted;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class MixedPromotedAndRegularParams
{
    public function __construct(
        string $regularParam,
        private $usedPromoted
    ) {
        echo $regularParam;
    }

    public function getUsed()
    {
        return $this->usedPromoted;
    }
}

?>
