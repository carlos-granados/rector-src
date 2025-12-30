<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\WrapEncapsedVariableInCurlyBracesRector\Fixture;

class SkipPropertyAccess
{
    public function run()
    {
        $obj = new \stdClass();
        $obj->prop = 'value';
        // Property access already requires braces in PHP
        return "{$obj->prop} test";
    }
}

?>
