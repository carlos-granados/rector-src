<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyConditionsRector\Fixture;

class NestedBooleanAnd
{
    public function run($foo, $bar)
    {
        // Should skip nested BooleanAnd as it's complex
        if (!($foo === 'test' && $bar > 5)) {
            echo 'skip me';
        }
    }
}
