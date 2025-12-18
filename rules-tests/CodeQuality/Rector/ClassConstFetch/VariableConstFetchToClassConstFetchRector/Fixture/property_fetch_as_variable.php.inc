<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Fixture;

use Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source\ClassWithConstants;

final class SkipPropertyFetchAsVariable
{
    private ClassWithConstants $property;

    public function run()
    {
        return $this->property::NAME;
    }
}
