<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class EmptyArrays
{
    public function go()
    {
        return array_merge([], []);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class EmptyArrays
{
    public function go()
    {
        return [];
    }
}

?>
