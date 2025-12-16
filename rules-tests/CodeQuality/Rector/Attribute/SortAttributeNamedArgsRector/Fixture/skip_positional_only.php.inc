<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

#[MyAttribute(1, 2, 3)]
final class SkipPositionalOnly
{
}
