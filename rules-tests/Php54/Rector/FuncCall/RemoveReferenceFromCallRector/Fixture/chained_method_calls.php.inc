<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ChainedMethodCalls
{
    public function run($value)
    {
        return $this->first(&$value)->second(&$value);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ChainedMethodCalls
{
    public function run($value)
    {
        return $this->first($value)->second($value);
    }
}

?>
