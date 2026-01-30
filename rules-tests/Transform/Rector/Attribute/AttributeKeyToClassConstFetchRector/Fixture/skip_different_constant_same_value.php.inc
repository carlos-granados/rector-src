<?php

namespace Rector\Tests\Transform\Rector\Attribute\AttributeKeyToClassConstFetchRector\Fixture;

use Rector\Tests\Transform\Rector\Attribute\AttributeKeyToClassConstFetchRector\Source\OtherConstant;
use Rector\Tests\Transform\Rector\Attribute\AttributeKeyToClassConstFetchRector\Source\TestAttribute;

class DifferentConstantSameValue
{
    #[TestAttribute(type: OtherConstant::VAL)]
    public string $name;
}
