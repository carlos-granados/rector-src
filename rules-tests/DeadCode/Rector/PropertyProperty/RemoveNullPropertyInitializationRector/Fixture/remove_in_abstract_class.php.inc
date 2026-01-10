<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

abstract class RemoveInAbstractClass
{
    protected $handler = null;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

abstract class RemoveInAbstractClass
{
    protected $handler;
}

?>
