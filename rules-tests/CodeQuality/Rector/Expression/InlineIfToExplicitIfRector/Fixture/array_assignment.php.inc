<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class ArrayAssignment
{
    public function run()
    {
        $items = [];
        empty($items) && $items[0] = 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class ArrayAssignment
{
    public function run()
    {
        $items = [];
        if (empty($items)) {
            $items[0] = 5;
        }
    }
}

?>
