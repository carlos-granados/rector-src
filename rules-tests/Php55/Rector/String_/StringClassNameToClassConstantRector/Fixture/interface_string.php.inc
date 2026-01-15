<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InterfaceString
{
    public function run()
    {
        return 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeInterface';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InterfaceString
{
    public function run()
    {
        return \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeInterface::class;
    }
}

?>
