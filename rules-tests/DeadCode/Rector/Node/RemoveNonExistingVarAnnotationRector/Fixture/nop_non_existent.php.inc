<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class NopNonExistent
{
    public function run()
    {
        /** @var SomeClass $nonExistent */

        echo 'hello';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class NopNonExistent
{
    public function run()
    {
        echo 'hello';
    }
}

?>
