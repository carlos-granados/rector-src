<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function () {
            return 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function () {
            return \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class;
        };
    }
}

?>
