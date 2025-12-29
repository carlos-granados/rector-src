<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\ArrayKeyExistsTernaryThenValueToCoalescingRector\Fixture;

class SkipSpreadOperator
{
    public function run($values, $keyToMatch)
    {
        $args = [$keyToMatch, $values];
        // Invalid usage with spread operator
        $result = array_key_exists(...$args) ? $values[$keyToMatch] : null;
    }
}
