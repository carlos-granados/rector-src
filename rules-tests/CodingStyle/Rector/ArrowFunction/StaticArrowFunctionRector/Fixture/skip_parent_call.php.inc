<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\StaticArrowFunctionRector\Fixture;

class SkipParentCall extends \Exception
{
    public function run()
    {
        // Should skip if calling parent method (which may need instance context)
        fn() => parent::getMessage();
    }
}
