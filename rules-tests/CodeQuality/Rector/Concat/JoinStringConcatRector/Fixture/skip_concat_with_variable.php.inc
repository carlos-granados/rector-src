<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class SkipConcatWithVariable
{
    public function run()
    {
        $var = 'world';
        $name = 'Hello ' . $var;
        $name2 = $var . ' there';
    }
}
