<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\SimplifyDeMorganBinaryRector\Fixture;

class SkipBooleanAnd
{
    public function run($a, $b)
    {
        // This rule only handles BooleanOr, not BooleanAnd
        // De Morgan's law for AND (!($a && $b) -> !$a || !$b) is handled by a different rule
        $result = !($a > 5 && $b < 10);
    }
}
