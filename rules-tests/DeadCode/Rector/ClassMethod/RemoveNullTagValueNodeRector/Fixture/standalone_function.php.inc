<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

/**
 * @param null $foo
 * @return null
 */
function standaloneFunction($foo = null)
{
    return null;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

function standaloneFunction($foo = null)
{
    return null;
}

?>
