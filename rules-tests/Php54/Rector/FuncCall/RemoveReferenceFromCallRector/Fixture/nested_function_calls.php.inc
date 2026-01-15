<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class NestedFunctionCalls
{
    public function run($value)
    {
        return outer(inner(&$value));
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class NestedFunctionCalls
{
    public function run($value)
    {
        return outer(inner($value));
    }
}

?>
