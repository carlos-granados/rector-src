<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class SkipParamWithoutVariable
{
    /**
     * @param null $nonExistent
     * @param null $foo
     */
    function foo($foo = null)
    {
        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class SkipParamWithoutVariable
{
    /**
     * @param null $nonExistent
     */
    function foo($foo = null)
    {
        return null;
    }
}

?>
