<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

class Container
{
    public array $items = [];
}

final class ChainedProperty
{
    private Container $container;

    public function run()
    {
        if (empty($this->container->items)) {
            return true;
        }

        return false;
    }
}

-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

class Container
{
    public array $items = [];
}

final class ChainedProperty
{
    private Container $container;

    public function run()
    {
        if ($this->container->items === []) {
            return true;
        }

        return false;
    }
}
