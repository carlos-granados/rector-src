<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class TraitString
{
    public function run()
    {
        return 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeTrait';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class TraitString
{
    public function run()
    {
        return \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeTrait::class;
    }
}

?>
