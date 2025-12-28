<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class WithArguments
{
    public function __construct(
        private string $name,
        private int $age
    ) {
    }

    public function build(string $name, int $age)
    {
        return new static($name, $age);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class WithArguments
{
    public function __construct(
        private string $name,
        private int $age
    ) {
    }

    public function build(string $name, int $age)
    {
        return new self($name, $age);
    }
}

?>
