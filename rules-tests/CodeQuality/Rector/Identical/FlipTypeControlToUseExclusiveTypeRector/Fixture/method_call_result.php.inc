<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture;

use stdClass;

final class MethodCallResult
{
    public function run()
    {
        if ($this->getObject() === null) {
            return;
        }
    }

    private function getObject(): ?stdClass
    {
        return new stdClass();
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture;

use stdClass;

final class MethodCallResult
{
    public function run()
    {
        if (!$this->getObject() instanceof \stdClass) {
            return;
        }
    }

    private function getObject(): ?stdClass
    {
        return new stdClass();
    }
}

?>
