<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

final class MultipleAttributesOnMethod
{
    #[MyAttribute(baz: 3, foo: 1, bar: 2)]
    #[MyAttribute(bar: 5, foo: 4)]
    public function run()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

final class MultipleAttributesOnMethod
{
    #[MyAttribute(foo: 1, bar: 2, baz: 3)]
    #[MyAttribute(foo: 4, bar: 5)]
    public function run()
    {
    }
}

?>
