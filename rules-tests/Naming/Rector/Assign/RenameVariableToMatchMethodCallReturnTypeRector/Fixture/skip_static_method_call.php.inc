<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipStaticMethodCall
{
    public function run()
    {
        // Static method calls should also work
        $a = FastRunner::create();
        $a->exit();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipStaticMethodCall
{
    public function run()
    {
        // Static method calls should also work
        $fastRunner = FastRunner::create();
        $fastRunner->exit();
    }
}

?>
