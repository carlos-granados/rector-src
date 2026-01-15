<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class SkipUppercaseEModifier
{
    public function run()
    {
        // E is not a valid modifier, only lowercase e is
        $result = preg_replace('/pattern/E', 'strtolower("$1")', $subject);
    }
}
