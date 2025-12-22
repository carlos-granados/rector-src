<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\BooleanNotIdenticalToNotIdenticalRector\Fixture;

class BothSidesBooleanNot
{
    public function run()
    {
        $a = true;
        $b = false;

        var_dump(! $a === ! $b);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\BooleanNotIdenticalToNotIdenticalRector\Fixture;

class BothSidesBooleanNot
{
    public function run()
    {
        $a = true;
        $b = false;

        var_dump($a === $b);
    }
}

?>
