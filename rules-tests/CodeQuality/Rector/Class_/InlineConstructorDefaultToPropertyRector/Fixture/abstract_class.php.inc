<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

abstract class AbstractClassProperty
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

abstract class AbstractClassProperty
{
    private $name = 'John';

    public function __construct()
    {
    }
}

?>
