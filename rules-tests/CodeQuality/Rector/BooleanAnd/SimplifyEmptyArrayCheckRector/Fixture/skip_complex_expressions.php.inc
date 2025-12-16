<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\SimplifyEmptyArrayCheckRector\Fixture;

final class SkipComplexExpressions
{
    public function isEmptyArrayProperty($obj): bool
    {
        // Property access - currently skipped because rule only accepts Variable
        return is_array($obj->prop) && empty($obj->prop);
    }

    public function isEmptyArrayIndex($arr): bool
    {
        // Array access - currently skipped because rule only accepts Variable
        return is_array($arr['key']) && empty($arr['key']);
    }
}
