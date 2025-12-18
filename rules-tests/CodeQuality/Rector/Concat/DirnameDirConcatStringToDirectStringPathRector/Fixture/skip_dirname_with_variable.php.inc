<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\DirnameDirConcatStringToDirectStringPathRector\Fixture;

final class SkipDirnameWithVariable
{
    public function run()
    {
        $somePath = '/some/path';
        $path = dirname($somePath) . '/file.txt';
    }
}
