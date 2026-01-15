<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class SkipFirstClassCallable
{
    public function run()
    {
        $fn = preg_replace(...);
    }
}
