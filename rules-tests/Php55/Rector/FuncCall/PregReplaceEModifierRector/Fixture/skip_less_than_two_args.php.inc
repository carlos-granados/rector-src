<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class SkipLessThanTwoArgs
{
    public function run()
    {
        $result = preg_replace('/pattern/e');
    }
}
