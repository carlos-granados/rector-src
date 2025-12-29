<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\StaticArrowFunctionRector\Fixture;

class SkipThisInNestedClosure
{
    private $data = 'data';

    public function run()
    {
        // Should skip if nested closure uses $this
        fn() => function() { return $this->data; };
    }
}
