<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ConstructorWithParams
{
    public function __construct(string $name, int $age)
    {
        parent::__construct($name, $age);
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ConstructorWithParams
{
    public function __construct(string $name, int $age)
    {
    }
}

?>
