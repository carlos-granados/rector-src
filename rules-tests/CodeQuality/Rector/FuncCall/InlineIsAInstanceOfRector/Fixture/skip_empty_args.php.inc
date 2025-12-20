<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

final class SkipEmptyArgs
{
    public function run()
    {
        return is_a();
    }
}
