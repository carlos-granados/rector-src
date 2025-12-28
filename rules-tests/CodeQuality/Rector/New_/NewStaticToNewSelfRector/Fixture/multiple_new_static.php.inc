<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class MultipleNewStatic
{
    public function build()
    {
        $first = new static();
        $second = new static();
        return [$first, $second];
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class MultipleNewStatic
{
    public function build()
    {
        $first = new self();
        $second = new self();
        return [$first, $second];
    }
}

?>
