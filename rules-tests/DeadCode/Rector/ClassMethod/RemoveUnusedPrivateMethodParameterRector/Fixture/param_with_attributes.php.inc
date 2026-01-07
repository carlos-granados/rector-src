<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

use Attribute;

#[Attribute]
class SomeAttribute
{
}

final class ParamWithAttributes
{
    private function process($used, #[SomeAttribute] $unused)
    {
        return $used * 2;
    }

    public function execute()
    {
        return $this->process(5, 'ignored');
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

use Attribute;

#[Attribute]
class SomeAttribute
{
}

final class ParamWithAttributes
{
    private function process($used)
    {
        return $used * 2;
    }

    public function execute()
    {
        return $this->process(5);
    }
}

?>
