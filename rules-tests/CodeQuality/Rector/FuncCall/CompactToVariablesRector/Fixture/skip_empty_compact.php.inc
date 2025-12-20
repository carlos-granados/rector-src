<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class SkipEmptyCompact
{
    public function run()
    {
        return compact();
    }
}
