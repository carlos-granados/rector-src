<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class ArrayAssignment
{
    public function run($condition)
    {
        $items = [];
        $condition ? $items[] = 5 : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class ArrayAssignment
{
    public function run($condition)
    {
        $items = [];
        if ($condition) {
            $items[] = 5;
        }
    }
}

?>
