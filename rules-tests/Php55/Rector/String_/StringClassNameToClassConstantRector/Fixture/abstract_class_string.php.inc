<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class AbstractClassString
{
    public function run()
    {
        return 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AbstractClass';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class AbstractClassString
{
    public function run()
    {
        return \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AbstractClass::class;
    }
}

?>
