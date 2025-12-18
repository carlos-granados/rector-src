<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

class ReadonlyProperty
{
    public readonly int $existingReadonly;

    public function __construct()
    {
        $this->existingReadonly = 1;
        $this->value = 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

class ReadonlyProperty
{
    private int $value;
    public readonly int $existingReadonly;

    public function __construct()
    {
        $this->existingReadonly = 1;
        $this->value = 5;
    }
}

?>
