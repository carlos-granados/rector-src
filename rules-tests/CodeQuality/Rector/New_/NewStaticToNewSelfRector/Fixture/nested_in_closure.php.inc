<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class NestedInClosure
{
    public function build()
    {
        return function () {
            return new static();
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class NestedInClosure
{
    public function build()
    {
        return function () {
            return new self();
        };
    }
}

?>
