<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\ArrayKeyExistsTernaryThenValueToCoalescingRector\Fixture;

class SkipNamedArguments
{
    public function run($values, $keyToMatch)
    {
        $result = array_key_exists(key: $keyToMatch, array: $values) ? $values[$keyToMatch] : null;
    }
}
