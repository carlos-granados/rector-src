<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SwitchNonExistent
{
    public function run(int $type)
    {
        /** @var int $nonExistent */
        switch ($type) {
            case 1:
                return 'one';
            default:
                return 'other';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SwitchNonExistent
{
    public function run(int $type)
    {
        switch ($type) {
            case 1:
                return 'one';
            default:
                return 'other';
        }
    }
}

?>
