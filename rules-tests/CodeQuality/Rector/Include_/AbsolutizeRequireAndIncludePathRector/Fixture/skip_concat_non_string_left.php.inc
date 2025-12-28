<?php

namespace Rector\Tests\CodeQuality\Rector\Include_\AbsolutizeRequireAndIncludePathRector\Fixture;

class SkipConcatNonStringLeft
{
    public function run(string $path)
    {
        require $path . '/autoload.php';
    }
}

?>
