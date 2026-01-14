<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipNameConflictWithNextAssignment
{
    public function run()
    {
        $a = $this->getFastRunner();
        $a->exit();
        
        // Second call cannot use fastRunner since it's taken
        $b = $this->getAnotherRunner();
        $b->exit();
    }

    public function getFastRunner(): FastRunner
    {
        return new FastRunner();
    }

    public function getAnotherRunner(): FastRunner
    {
        return new FastRunner();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipNameConflictWithNextAssignment
{
    public function run()
    {
        $fastRunner = $this->getFastRunner();
        $fastRunner->exit();
        
        // Second call cannot use fastRunner since it's taken
        $b = $this->getAnotherRunner();
        $b->exit();
    }

    public function getFastRunner(): FastRunner
    {
        return new FastRunner();
    }

    public function getAnotherRunner(): FastRunner
    {
        return new FastRunner();
    }
}

?>
