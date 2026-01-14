<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class InClosure
{
    public function run()
    {
        $closure = function () {
            $a = $this->getFastRunner();
            $a->exit();
        };
    }

    public function getFastRunner(): FastRunner
    {
        return new FastRunner();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class InClosure
{
    public function run()
    {
        $closure = function () {
            $fastRunner = $this->getFastRunner();
            $fastRunner->exit();
        };
    }

    public function getFastRunner(): FastRunner
    {
        return new FastRunner();
    }
}

?>
