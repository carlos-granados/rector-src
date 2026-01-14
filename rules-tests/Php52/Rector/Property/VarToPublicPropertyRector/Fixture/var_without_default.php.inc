<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class VarWithoutDefault
{
    var $name;
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class VarWithoutDefault
{
    public $name;
}

?>
