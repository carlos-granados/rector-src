<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

trait VarInTrait
{
    var $name = 'Tom';
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

trait VarInTrait
{
    public $name = 'Tom';
}

?>
