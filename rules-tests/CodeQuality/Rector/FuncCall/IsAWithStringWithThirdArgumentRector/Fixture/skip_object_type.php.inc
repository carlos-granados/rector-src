<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class SkipObjectType
{
    public function run(object $value)
    {
        return is_a($value, 'stdClass');
    }
}
