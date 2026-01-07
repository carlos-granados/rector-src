<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class MultiplePromotedProperties
{
    public function __construct(
        private \stdClass $first,
        private \stdClass $second,
        private \stdClass $third
    ) {
        $this->first = $first;
        $this->second = $second;
        $this->third = $third;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class MultiplePromotedProperties
{
    public function __construct(private \stdClass $first, private \stdClass $second, private \stdClass $third)
    {
    }
}

?>
