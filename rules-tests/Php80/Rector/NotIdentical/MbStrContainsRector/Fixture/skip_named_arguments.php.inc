<?php

namespace Rector\Tests\Php80\Rector\NotIdentical\MbStrContainsRector\Fixture;

class SkipNamedArguments
{
    public function run(string $haystack, string $needle)
    {
        $a = mb_strpos(haystack: $haystack, needle: $needle) !== false;
        $b = mb_strpos(needle: $needle, haystack: $haystack) !== false;
        $c = mb_strstr(haystack: $haystack, needle: $needle) !== false;

        return $a && $b && $c;
    }
}
