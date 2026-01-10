<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class MultipleParentCalls
{
    public function run()
    {
        parent::first();
        parent::second();
        parent::third();
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class MultipleParentCalls
{
    public function run()
    {
    }
}

?>
