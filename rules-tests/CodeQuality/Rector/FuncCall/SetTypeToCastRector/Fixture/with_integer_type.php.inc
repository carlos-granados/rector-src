<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SetTypeToCastRector\Fixture;

final class WithIntegerType
{
    public function run($foo)
    {
        settype($foo, 'integer');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SetTypeToCastRector\Fixture;

final class WithIntegerType
{
    public function run($foo)
    {
        $foo = (int) $foo;
    }
}

?>
