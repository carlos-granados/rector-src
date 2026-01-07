<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

use Attribute;

#[Attribute]
class ParamAttribute
{
}

class PromotedPropertyWithParamAttribute
{
    public function __construct(
        #[ParamAttribute]
        private $unusedWithAttribute,
        private $usedWithoutAttribute
    ) {
    }

    public function getUsed()
    {
        return $this->usedWithoutAttribute;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

use Attribute;

#[Attribute]
class ParamAttribute
{
}

class PromotedPropertyWithParamAttribute
{
    public function __construct(
        private $usedWithoutAttribute
    ) {
    }

    public function getUsed()
    {
        return $this->usedWithoutAttribute;
    }
}

?>
