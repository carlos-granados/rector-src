<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\WrapEncapsedVariableInCurlyBracesRector\Fixture;

class SkipArrayAccess
{
    public function run()
    {
        $arr = ['key' => 'value'];
        // Array access already requires braces in PHP
        return "{$arr['key']} test";
    }
}

?>
