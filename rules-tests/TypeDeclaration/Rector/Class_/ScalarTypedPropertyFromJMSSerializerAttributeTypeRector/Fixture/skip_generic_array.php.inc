<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ScalarTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

final class SkipGenericArray
{
    #[\JMS\Serializer\Annotation\Type('array<string>')]
    private $items;
}
