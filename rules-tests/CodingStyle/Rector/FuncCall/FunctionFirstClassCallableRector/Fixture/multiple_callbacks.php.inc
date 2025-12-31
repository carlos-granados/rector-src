<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\FunctionFirstClassCallableRector\Fixture;

final class MultipleCallbacks
{
    public function reduce(array $data)
    {
        // array_reduce has a callable parameter
        return array_reduce($data, 'max', 0);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\FunctionFirstClassCallableRector\Fixture;

final class MultipleCallbacks
{
    public function reduce(array $data)
    {
        // array_reduce has a callable parameter
        return array_reduce($data, max(...), 0);
    }
}

?>
