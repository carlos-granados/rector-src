<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

use Attribute;

#[Attribute]
class CustomAttribute
{
}

class ReturnWithAttribute
{
    /**
     * @return string
     */
    #[CustomAttribute]
    public function getName(): string
    {
        return 'test';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

use Attribute;

#[Attribute]
class CustomAttribute
{
}

class ReturnWithAttribute
{
    #[CustomAttribute]
    public function getName(): string
    {
        return 'test';
    }
}

?>
