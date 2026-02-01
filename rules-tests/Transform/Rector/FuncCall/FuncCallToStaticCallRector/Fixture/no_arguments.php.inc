<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToStaticCallRector\Fixture;

class NoArguments
{
    public function someMethod()
    {
        \view();
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToStaticCallRector\Fixture;

class NoArguments
{
    public function someMethod()
    {
        \SomeStaticClass::render();
    }
}

?>
