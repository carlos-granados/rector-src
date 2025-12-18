<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants;

final class MultipleConstantFetches
{
    public function run(ClassWithConstants $classWithConstants)
    {
        $name = $classWithConstants::NAME;
        $value = $classWithConstants::VALUE;
        return [$name, $value];
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants;

final class MultipleConstantFetches
{
    public function run(ClassWithConstants $classWithConstants)
    {
        $name = \Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants::NAME;
        $value = \Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants::VALUE;
        return [$name, $value];
    }
}

?>
