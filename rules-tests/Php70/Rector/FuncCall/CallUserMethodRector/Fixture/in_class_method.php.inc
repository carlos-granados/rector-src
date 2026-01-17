<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

class SomeClass
{
    public function process()
    {
        $handler = new Handler();
        call_user_method('handle', $handler, $this->data);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

class SomeClass
{
    public function process()
    {
        $handler = new Handler();
        call_user_func([$handler, 'handle'], $this->data);
    }
}

?>
