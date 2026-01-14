<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class VarWithArrayDefault
{
    var $items = ['one', 'two', 'three'];
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class VarWithArrayDefault
{
    public $items = ['one', 'two', 'three'];
}

?>
