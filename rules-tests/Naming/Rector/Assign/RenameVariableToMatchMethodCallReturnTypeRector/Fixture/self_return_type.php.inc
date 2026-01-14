<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

class SelfReturnType
{
    public function run()
    {
        $a = $this->withSomething();
    }

    public function withSomething(): self
    {
        return $this;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

class SelfReturnType
{
    public function run()
    {
        $selfReturnType = $this->withSomething();
    }

    public function withSomething(): self
    {
        return $this;
    }
}

?>
