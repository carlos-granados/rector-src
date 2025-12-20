<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class SkipEmptyArgs
{
    public function run()
    {
        return is_a();
    }
}
