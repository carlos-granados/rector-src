<?php

namespace Rector\Tests\CodingStyle\Rector\Property\SplitGroupedPropertiesRector\Fixture;

class WithTypeHints
{
    public string $first, $second;
    private ?int $third, $fourth;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Property\SplitGroupedPropertiesRector\Fixture;

class WithTypeHints
{
    public string $first;
    public string $second;
    private ?int $third;
    private ?int $fourth;
}

?>
