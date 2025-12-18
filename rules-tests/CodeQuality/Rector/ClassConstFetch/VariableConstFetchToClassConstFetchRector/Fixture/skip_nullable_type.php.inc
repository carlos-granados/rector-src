<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants;

final class SkipNullableType
{
    public function run(?ClassWithConstants $classWithConstants)
    {
        if ($classWithConstants === null) {
            return null;
        }
        return $classWithConstants::NAME;
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants;

final class SkipNullableType
{
    public function run(?ClassWithConstants $classWithConstants)
    {
        if ($classWithConstants === null) {
            return null;
        }
        return \Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants::NAME;
    }
}

?>
