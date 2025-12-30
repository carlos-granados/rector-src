<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function testStaticClosure()
{
    return static function () {
        $args = \func_get_args();
        return $args;
    };
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function testStaticClosure()
{
    return static function (...$args) {
        return $args;
    };
}

?>
