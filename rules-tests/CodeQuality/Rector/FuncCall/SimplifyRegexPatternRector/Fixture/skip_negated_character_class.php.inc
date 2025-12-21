<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class SkipNegatedCharacterClass
{
    public function run($value)
    {
        preg_match('#[^0-9]#', $value);
    }
}
