<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class TraitProperty
{
    private $name;

    public function __construct()
    {
        $this->name = 'John';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class TraitProperty
{
    private $name = 'John';

    public function __construct()
    {
    }
}

?>
