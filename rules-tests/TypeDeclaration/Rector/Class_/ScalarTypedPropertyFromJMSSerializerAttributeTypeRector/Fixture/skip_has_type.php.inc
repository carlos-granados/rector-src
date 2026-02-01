<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ScalarTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

final class SkipHasType
{
    #[\JMS\Serializer\Annotation\Type('string')]
    private ?string $name = null;
}
