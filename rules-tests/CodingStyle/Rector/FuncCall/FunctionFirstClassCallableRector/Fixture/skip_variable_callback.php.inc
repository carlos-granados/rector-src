<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\FunctionFirstClassCallableRector\Fixture;

final class SkipVariableCallback
{
    public function map(array $data, string $callback)
    {
        // Variable callbacks should be skipped (not a String_ node)
        return array_map($callback, $data);
    }
}

?>
