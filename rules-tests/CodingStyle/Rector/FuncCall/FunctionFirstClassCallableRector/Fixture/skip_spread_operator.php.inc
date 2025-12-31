<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\FunctionFirstClassCallableRector\Fixture;

final class SkipSpreadOperator
{
    public function map(array $data, array $args)
    {
        // Spread operator should be skipped
        return array_map(...$args);
    }
}

?>
