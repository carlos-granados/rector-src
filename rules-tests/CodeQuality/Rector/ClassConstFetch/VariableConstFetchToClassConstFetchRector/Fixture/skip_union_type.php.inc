<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants;
use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\FinalClassWithConstant;

final class SkipUnionType
{
    public function run(ClassWithConstants|FinalClassWithConstant $class)
    {
        return $class::NAME;
    }
}
