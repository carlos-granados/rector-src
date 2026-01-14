<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

abstract class VarInAbstractClass
{
    var $name = 'Tom';
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

abstract class VarInAbstractClass
{
    public $name = 'Tom';
}

?>
