<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class SingleArgument
{
    public function go()
    {
        $value = 5;

        return array_merge([$value]);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class SingleArgument
{
    public function go()
    {
        $value = 5;

        return [$value];
    }
}

?>
