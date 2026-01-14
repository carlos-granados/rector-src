<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class MultipleForeachSameMethod
{
    public function run()
    {
        foreach ($users as $item) {
            echo $item;
        }

        foreach ($products as $thing) {
            echo $thing;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class MultipleForeachSameMethod
{
    public function run()
    {
        foreach ($users as $user) {
            echo $user;
        }

        foreach ($products as $product) {
            echo $product;
        }
    }
}

?>
