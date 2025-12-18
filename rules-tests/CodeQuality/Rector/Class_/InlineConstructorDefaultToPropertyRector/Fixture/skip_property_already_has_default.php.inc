<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class PropertyAlreadyHasDefault
{
    private $name = 'Jane';

    public function __construct()
    {
        $this->name = 'John';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class PropertyAlreadyHasDefault
{
    private $name = 'Jane';

    public function __construct()
    {
        $this->name = 'John';
    }
}

?>
