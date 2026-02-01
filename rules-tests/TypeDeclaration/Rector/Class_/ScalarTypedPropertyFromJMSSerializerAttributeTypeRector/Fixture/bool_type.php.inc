<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ScalarTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

final class BoolType
{
    #[\JMS\Serializer\Annotation\Type('bool')]
    private $active;
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\ScalarTypedPropertyFromJMSSerializerAttributeTypeRector\Fixture;

final class BoolType
{
    #[\JMS\Serializer\Annotation\Type('bool')]
    private ?bool $active = null;
}

?>
