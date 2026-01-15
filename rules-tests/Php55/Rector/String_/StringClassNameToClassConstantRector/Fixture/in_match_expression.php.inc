<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InMatchExpression
{
    public function run(int $value)
    {
        return match ($value) {
            1 => 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass',
            2 => 'Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser',
            default => null,
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class InMatchExpression
{
    public function run(int $value)
    {
        return match ($value) {
            1 => \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\AnotherClass::class,
            2 => \Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Source\SomeUser::class,
            default => null,
        };
    }
}

?>
