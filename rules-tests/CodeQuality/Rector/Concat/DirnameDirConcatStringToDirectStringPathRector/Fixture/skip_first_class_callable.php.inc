<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\DirnameDirConcatStringToDirectStringPathRector\Fixture;

final class SkipFirstClassCallable
{
    public function run()
    {
        $callable = dirname(...);
    }
}
