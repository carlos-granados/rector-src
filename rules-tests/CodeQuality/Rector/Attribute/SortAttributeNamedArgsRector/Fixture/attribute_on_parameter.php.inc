<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

final class AttributeOnParameter
{
    public function run(#[MyAttribute(bar: 2, foo: 1)] $param)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Attribute\SortAttributeNamedArgsRector\Source\MyAttribute;

final class AttributeOnParameter
{
    public function run(#[MyAttribute(foo: 1, bar: 2)] $param)
    {
    }
}

?>
