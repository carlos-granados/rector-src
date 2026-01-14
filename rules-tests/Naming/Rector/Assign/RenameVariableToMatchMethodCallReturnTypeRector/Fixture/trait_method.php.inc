<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

trait RunnerTraitForTest
{
    public function getRunner(): FastRunner
    {
        return new FastRunner();
    }
}

class TraitMethod
{
    use RunnerTraitForTest;

    public function run()
    {
        $a = $this->getRunner();
        $a->exit();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

trait RunnerTraitForTest
{
    public function getRunner(): FastRunner
    {
        return new FastRunner();
    }
}

class TraitMethod
{
    use RunnerTraitForTest;

    public function run()
    {
        $fastRunner = $this->getRunner();
        $fastRunner->exit();
    }
}

?>
