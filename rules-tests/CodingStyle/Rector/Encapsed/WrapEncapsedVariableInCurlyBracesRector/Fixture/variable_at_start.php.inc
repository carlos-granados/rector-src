<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\WrapEncapsedVariableInCurlyBracesRector\Fixture;

class VariableAtStart
{
    public function run()
    {
        $world = 'world';
        return "$world is here";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\WrapEncapsedVariableInCurlyBracesRector\Fixture;

class VariableAtStart
{
    public function run()
    {
        $world = 'world';
        return "{$world} is here";
    }
}

?>
