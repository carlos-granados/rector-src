<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Iterator;

class InterfaceReturnType
{
    public function run()
    {
        $a = $this->getIterator();
        $a->next();
    }

    public function getIterator(): Iterator
    {
        return new \ArrayIterator([]);
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Iterator;

class InterfaceReturnType
{
    public function run()
    {
        $iterator = $this->getIterator();
        $iterator->next();
    }

    public function getIterator(): Iterator
    {
        return new \ArrayIterator([]);
    }
}

?>
