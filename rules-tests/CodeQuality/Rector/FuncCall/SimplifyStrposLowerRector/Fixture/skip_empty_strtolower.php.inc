<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyStrposLowerRector\Fixture;

final class SkipEmptyStrtolower
{
    public function run()
    {
        strpos(strtolower(), 'find-me');
    }
}
