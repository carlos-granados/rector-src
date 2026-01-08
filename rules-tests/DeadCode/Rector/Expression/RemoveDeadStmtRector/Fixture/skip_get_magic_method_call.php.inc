<?php

namespace Rector\Tests\DeadCode\Rector\Expression\RemoveDeadStmtRector\Fixture;

class SkipGetMagicMethodCall
{
    public function __get($name)
    {
        return 'magic';
    }
    
    public function test()
    {
        $this->undefined;
    }
}
