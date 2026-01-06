<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class MultipleVarTags
{
    /**
     * @var null
     */
    public $var1 = null;

    /**
     * @var null
     */
    public $var2 = null;

    /**
     * @var string
     */
    public $var3 = '';
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class MultipleVarTags
{
    public $var1 = null;

    public $var2 = null;

    /**
     * @var string
     */
    public $var3 = '';
}

?>
