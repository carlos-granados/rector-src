<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

final class AttributeOnProperty
{
    #[MyAttribute(baz: 3, bar: 2, foo: 1)]
    private $property;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

final class AttributeOnProperty
{
    #[MyAttribute(foo: 1, bar: 2, baz: 3)]
    private $property;
}

?>
