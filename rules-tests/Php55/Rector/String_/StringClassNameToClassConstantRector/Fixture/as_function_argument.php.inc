<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class AsFunctionArgument
{
    public function run()
    {
        return class_exists('Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass');
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class AsFunctionArgument
{
    public function run()
    {
        return class_exists(\Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class);
    }
}

?>
