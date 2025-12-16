<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class ReturnStatement
{
    public function alwaysTrue()
    {
        return !false;
    }

    public function alwaysFalse()
    {
        return !true;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class ReturnStatement
{
    public function alwaysTrue()
    {
        return true;
    }

    public function alwaysFalse()
    {
        return false;
    }
}

?>
