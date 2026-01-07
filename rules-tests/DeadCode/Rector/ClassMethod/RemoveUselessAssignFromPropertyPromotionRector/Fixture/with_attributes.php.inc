<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

use Attribute;

#[Attribute]
class SomeAttribute {}

class WithAttributes
{
    public function __construct(
        #[SomeAttribute]
        private \stdClass $std
    ) {
        $this->std = $std;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

use Attribute;

#[Attribute]
class SomeAttribute {}

class WithAttributes
{
    public function __construct(
        #[SomeAttribute]
        private \stdClass $std
    )
    {
    }
}

?>
