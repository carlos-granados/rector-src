<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class SkipNamedArguments
{
    public function run()
    {
        $isIt = in_array(needle: strtolower($type), haystack: ['$this'], strict: true);
        $isIt = in_array(haystack: ['$this'], needle: strtolower($type));
    }
}
