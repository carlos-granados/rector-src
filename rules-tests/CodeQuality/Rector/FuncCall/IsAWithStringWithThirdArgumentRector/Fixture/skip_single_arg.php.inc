<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class SkipSingleArg
{
    public function run(string $value)
    {
        return is_a($value);
    }
}
