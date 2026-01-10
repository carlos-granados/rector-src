<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class RemovePublicProperty
{
    public $data = null;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class RemovePublicProperty
{
    public $data;
}

?>
