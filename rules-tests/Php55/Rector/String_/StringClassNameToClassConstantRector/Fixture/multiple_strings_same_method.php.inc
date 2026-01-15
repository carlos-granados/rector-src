<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class MultipleStringsSameMethod
{
    public function run()
    {
        $first = 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass';
        $second = 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser';
        $third = 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\View';

        return [$first, $second, $third];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class MultipleStringsSameMethod
{
    public function run()
    {
        $first = \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class;
        $second = \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser::class;
        $third = \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\View::class;

        return [$first, $second, $third];
    }
}

?>
