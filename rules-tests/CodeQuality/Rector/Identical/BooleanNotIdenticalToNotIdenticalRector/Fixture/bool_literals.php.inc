<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\BooleanNotIdenticalToNotIdenticalRector\Fixture;

class BoolLiterals
{
    public function run()
    {
        var_dump(! true === false);
        var_dump(! (true === false));
        var_dump(true === ! false);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\BooleanNotIdenticalToNotIdenticalRector\Fixture;

class BoolLiterals
{
    public function run()
    {
        var_dump(true !== false);
        var_dump(true !== false);
        var_dump(true !== false);
    }
}

?>
