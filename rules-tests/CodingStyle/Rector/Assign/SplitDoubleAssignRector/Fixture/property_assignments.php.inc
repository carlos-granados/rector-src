<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\SplitDoubleAssignRector\Fixture;

class PropertyAssignments
{
    private $a;
    private $b;

    public function run()
    {
        $this->a = $this->b = 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\SplitDoubleAssignRector\Fixture;

class PropertyAssignments
{
    private $a;
    private $b;

    public function run()
    {
        $this->a = 1;
        $this->b = 1;
    }
}

?>
