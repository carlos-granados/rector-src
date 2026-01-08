<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

class PropertyAssignment
{
    private $prop;

    public function run()
    {
        $this->prop = $this->prop;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

class PropertyAssignment
{
    private $prop;

    public function run()
    {
    }
}

?>
