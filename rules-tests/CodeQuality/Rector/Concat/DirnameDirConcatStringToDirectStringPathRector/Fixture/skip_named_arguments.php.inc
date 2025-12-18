<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\DirnameDirConcatStringToDirectStringPathRector\Fixture;

final class SkipNamedArguments
{
    public function run()
    {
        $path = dirname(path: __DIR__) . '/file.txt';
    }
}
