<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class WhileVar
{
    public function run()
    {
        /** @var int $nonExistent */
        while (true) {
            break;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class WhileVar
{
    public function run()
    {
        while (true) {
            break;
        }
    }
}

?>
