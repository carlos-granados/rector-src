<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

#[MyAttribute(foo: 1, bar: 2, baz: 3)]
final class SkipAlreadySorted
{
}
