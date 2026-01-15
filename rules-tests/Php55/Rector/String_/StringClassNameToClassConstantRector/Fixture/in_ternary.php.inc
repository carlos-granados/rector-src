<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InTernary
{
    public function run(bool $condition)
    {
        return $condition
            ? 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass'
            : 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InTernary
{
    public function run(bool $condition)
    {
        return $condition
            ? \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class
            : \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser::class;
    }
}

?>
