<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ObjectTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

use JMS\Serializer\Annotation\Type;
use Rector\Tests\TypeDeclaration\Rector\Class_\ObjectTypedPropertyFromJMSSerializerAttributeTypeRector\Source\SomeClassInSerializer;

final class SkipHasType
{
    #[Type(SomeClassInSerializer::class)]
    private ?SomeClassInSerializer $name = null;
}
