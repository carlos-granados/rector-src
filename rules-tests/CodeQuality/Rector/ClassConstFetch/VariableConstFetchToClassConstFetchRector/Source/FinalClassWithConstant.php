<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source;

final class FinalClassWithConstant
{
    public const CONSTANT_NAME = 'value';

    public const NAME = 'FinalName';
}
