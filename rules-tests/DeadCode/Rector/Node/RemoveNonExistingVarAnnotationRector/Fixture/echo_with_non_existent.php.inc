<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class EchoWithNonExistent
{
    public function run(string $message)
    {
        /** @var int $nonExistent */
        echo $message;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class EchoWithNonExistent
{
    public function run(string $message)
    {
        echo $message;
    }
}

?>
