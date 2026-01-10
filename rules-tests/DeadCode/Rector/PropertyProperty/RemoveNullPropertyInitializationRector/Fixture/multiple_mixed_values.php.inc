<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class MultipleMixedValues
{
    private $first = null, $second = 'value', $third = null;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class MultipleMixedValues
{
    private $first, $second = 'value', $third;
}

?>
