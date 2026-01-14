<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class MultipleVarProperties
{
    var $name = 'Tom';
    var $age = 50;
    var $email;
}

?>
-----
<?php

namespace Rector\Tests\Php52\Rector\Property\VarToPublicPropertyRector\Fixture;

final class MultipleVarProperties
{
    public $name = 'Tom';
    public $age = 50;
    public $email;
}

?>
