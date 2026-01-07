<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class MixedVisibility
{
    public function __construct(
        public \stdClass $public,
        protected \stdClass $protected,
        private \stdClass $private
    ) {
        $this->public = $public;
        $this->protected = $protected;
        $this->private = $private;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class MixedVisibility
{
    public function __construct(public \stdClass $public, protected \stdClass $protected, private \stdClass $private)
    {
    }
}

?>
