<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

class MethodCallResult
{
    public function run()
    {
        $result = $this->getValue();
        $result = $result;
    }

    private function getValue()
    {
        return 42;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

class MethodCallResult
{
    public function run()
    {
        $result = $this->getValue();
    }

    private function getValue()
    {
        return 42;
    }
}

?>
