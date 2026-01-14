<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class NestedForeach
{
    public function run()
    {
        foreach ($categories as $item) {
            foreach ($item->products as $product) {
                echo $product;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class NestedForeach
{
    public function run()
    {
        foreach ($categories as $category) {
            foreach ($category->products as $product) {
                echo $product;
            }
        }
    }
}

?>
