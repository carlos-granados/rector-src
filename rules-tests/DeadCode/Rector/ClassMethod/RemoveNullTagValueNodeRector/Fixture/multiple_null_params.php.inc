<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class MultipleNullParams
{
    /**
     * @param null $foo
     * @param null $bar
     * @param null $baz
     */
    function foo($foo = null, $bar = null, $baz = null)
    {
        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class MultipleNullParams
{
    function foo($foo = null, $bar = null, $baz = null)
    {
        return null;
    }
}

?>
