<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class ReadonlyProperty
{
    public function __construct(
        public readonly array $items = []
    ) {
    }

    public function run()
    {
        if (empty($this->items)) {
            return true;
        }

        if (!empty($this->items)) {
            return false;
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class ReadonlyProperty
{
    public function __construct(
        public readonly array $items = []
    ) {
    }

    public function run()
    {
        if ($this->items === []) {
            return true;
        }

        if ($this->items !== []) {
            return false;
        }

        return null;
    }
}

?>
