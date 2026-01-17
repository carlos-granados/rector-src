<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

class SomeClass
{
    public function callSelf()
    {
        call_user_method('otherMethod', $this, 'param');
    }

    public function otherMethod($param)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

class SomeClass
{
    public function callSelf()
    {
        call_user_func([$this, 'otherMethod'], 'param');
    }

    public function otherMethod($param)
    {
    }
}

?>
