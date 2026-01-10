<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class ForeachVar
{
    public function run(array $items)
    {
        /** @var SomeClass $nonExistent */
        foreach ($items as $item) {
            echo $item;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class ForeachVar
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            echo $item;
        }
    }
}

?>
