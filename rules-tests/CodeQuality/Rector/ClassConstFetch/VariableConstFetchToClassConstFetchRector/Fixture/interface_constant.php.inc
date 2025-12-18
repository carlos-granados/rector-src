<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\InterfaceWithConstant;

final class InterfaceConstantUsage
{
    public function run(InterfaceWithConstant $interface)
    {
        return $interface::INTERFACE_CONSTANT;
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\InterfaceWithConstant;

final class InterfaceConstantUsage
{
    public function run(InterfaceWithConstant $interface)
    {
        return \Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\InterfaceWithConstant::INTERFACE_CONSTANT;
    }
}

?>
