<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class CaseInsensitive
{
    public function run()
    {
        $a = !FALSE;
        $b = !TRUE;
        $c = !False;
        $d = !True;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class CaseInsensitive
{
    public function run()
    {
        $a = true;
        $b = false;
        $c = true;
        $d = false;
    }
}

?>
