<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InArrayValue
{
    public function run()
    {
        return [
            'first' => 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass',
            'second' => 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser',
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InArrayValue
{
    public function run()
    {
        return [
            'first' => \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class,
            'second' => \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser::class,
        ];
    }
}

?>
