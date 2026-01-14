<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class VarWithDocblock
{
    /** @var string */
    var $name = 'Tom';
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class VarWithDocblock
{
    /** @var string */
    public $name = 'Tom';
}

?>
