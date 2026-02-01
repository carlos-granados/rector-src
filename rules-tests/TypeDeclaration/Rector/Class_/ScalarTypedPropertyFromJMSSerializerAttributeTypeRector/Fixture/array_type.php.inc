<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ScalarTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

final class ArrayType
{
    #[\JMS\Serializer\Annotation\Type('array')]
    private $items;
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ScalarTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

final class ArrayType
{
    #[\JMS\Serializer\Annotation\Type('array')]
    private ?array $items = null;
}

?>
