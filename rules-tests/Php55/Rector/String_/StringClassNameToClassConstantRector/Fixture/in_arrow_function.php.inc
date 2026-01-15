<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        return fn () => 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        return fn () => \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class;
    }
}

?>
