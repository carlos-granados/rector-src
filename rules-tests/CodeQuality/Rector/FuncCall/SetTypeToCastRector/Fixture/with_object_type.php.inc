<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SetTypeToCastRector\Fixture;

final class WithObjectType
{
    public function run($foo)
    {
        settype($foo, 'object');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SetTypeToCastRector\Fixture;

final class WithObjectType
{
    public function run($foo)
    {
        $foo = (object) $foo;
    }
}

?>
