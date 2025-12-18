<?php

declare(strict_types=1);

namespace Rector\Tests\CodeQuality\Rector\ClassConstFetch\VariableConstFetchToClassConstFetchRector\Source;

interface InterfaceWithConstant
{
    public const INTERFACE_CONSTANT = 'interface_value';
}
