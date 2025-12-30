<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\WrapEncapsedVariableInCurlyBracesRector\Fixture;

class VariableWithAlphanumeric
{
    public function run()
    {
        $test = 'value';
        $testVar = 'other';
        // Variable followed by alphanumeric requires braces
        return "$testVar is here";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\WrapEncapsedVariableInCurlyBracesRector\Fixture;

class VariableWithAlphanumeric
{
    public function run()
    {
        $test = 'value';
        $testVar = 'other';
        // Variable followed by alphanumeric requires braces
        return "{$testVar} is here";
    }
}

?>
