<?php

namespace Rector\Tests\CodeQuality\Rector\Include_\AbsolutizeRequireAndIncludePathRector\Fixture;

class SkipConcatPhar
{
    public function run(string $variable)
    {
        require 'phar://vendor/' . $variable;
    }
}

?>
