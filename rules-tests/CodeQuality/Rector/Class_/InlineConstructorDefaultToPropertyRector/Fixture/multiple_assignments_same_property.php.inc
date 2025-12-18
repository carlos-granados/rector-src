<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class MultipleAssignmentsSameProperty
{
    private $name;

    public function __construct()
    {
        $this->name = 'John';
        $this->name = 'Jane';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class MultipleAssignmentsSameProperty
{
    private $name = 'John';

    public function __construct()
    {
        $this->name = 'Jane';
    }
}

?>
