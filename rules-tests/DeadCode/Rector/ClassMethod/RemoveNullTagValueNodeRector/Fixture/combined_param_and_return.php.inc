<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class CombinedParamAndReturn
{
    /**
     * @param null $foo
     * @param string $bar
     * @return null
     */
    function foo($foo = null, $bar = '')
    {
        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class CombinedParamAndReturn
{
    /**
     * @param string $bar
     */
    function foo($foo = null, $bar = '')
    {
        return null;
    }
}

?>
