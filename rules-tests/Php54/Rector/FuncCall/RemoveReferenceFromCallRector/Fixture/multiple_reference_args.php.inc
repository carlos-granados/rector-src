<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class MultipleReferenceArgs
{
    public function run($one, $two, $three)
    {
        return someFunc(&$one, &$two, &$three);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class MultipleReferenceArgs
{
    public function run($one, $two, $three)
    {
        return someFunc($one, $two, $three);
    }
}

?>
