<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class RemoveStaticProperty
{
    private static $instance = null;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class RemoveStaticProperty
{
    private static $instance;
}

?>
