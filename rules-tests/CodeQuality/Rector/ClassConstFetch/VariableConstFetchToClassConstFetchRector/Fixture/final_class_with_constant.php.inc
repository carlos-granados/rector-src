<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\FinalClassWithConstant;

final class FinalClassWithConstantUsage
{
    public function run(FinalClassWithConstant $finalClass)
    {
        return $finalClass::CONSTANT_NAME;
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\FinalClassWithConstant;

final class FinalClassWithConstantUsage
{
    public function run(FinalClassWithConstant $finalClass)
    {
        return \Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\FinalClassWithConstant::CONSTANT_NAME;
    }
}

?>
