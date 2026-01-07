<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class SkipProtectedPromotedProperty
{
    public function __construct(
        protected $protectedUnused,
        public $publicUnused,
        private $privateUnused
    ) {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

class SkipProtectedPromotedProperty
{
    public function __construct(
        protected $protectedUnused,
        public $publicUnused
    ) {
    }
}

?>
