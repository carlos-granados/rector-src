<?php

namespace Rector\Tests\Php80\Rector\NotIdentical\StrContainsRector\Fixture;

class SkipNamedArguments
{
    public function run(string $haystack, string $needle)
    {
        $a = strpos(haystack: $haystack, needle: $needle) !== false;
        $b = strpos(needle: $needle, haystack: $haystack) !== false;
        $c = strstr(haystack: $haystack, needle: $needle) !== false;

        return $a && $b && $c;
    }
}
