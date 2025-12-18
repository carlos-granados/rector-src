<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\DirnameDirConcatStringToDirectStringPathRector\Fixture;

final class SkipConcatWithVariable
{
    public function run()
    {
        $suffix = '/file.txt';
        $path = dirname(__DIR__) . $suffix;
    }
}
