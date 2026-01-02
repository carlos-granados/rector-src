<?php

namespace Rector\Tests\CodingStyle\Rector\Property\SplitGroupedPropertiesRector\Fixture;

class WithAttributes
{
    #[\SomeAttribute]
    public string $first, $second;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Property\SplitGroupedPropertiesRector\Fixture;

class WithAttributes
{
    #[\SomeAttribute]
    public string $first;
    #[\SomeAttribute]
    public string $second;
}

?>
