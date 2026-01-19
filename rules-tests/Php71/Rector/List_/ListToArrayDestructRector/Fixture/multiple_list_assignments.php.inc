<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class MultipleListAssignments
{
    public function run()
    {
        list($a, $b) = $first;
        list($c, $d) = $second;
        list($e, $f) = $third;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class MultipleListAssignments
{
    public function run()
    {
        [$a, $b] = $first;
        [$c, $d] = $second;
        [$e, $f] = $third;
    }
}

?>
