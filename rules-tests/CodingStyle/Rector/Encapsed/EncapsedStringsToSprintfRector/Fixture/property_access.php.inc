<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\EncapsedStringsToSprintfRector\Fixture;

final class PropertyAccess
{
    private $name = 'John';

    public function run()
    {
        $result = "Name: {$this->name}";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\EncapsedStringsToSprintfRector\Fixture;

final class PropertyAccess
{
    private $name = 'John';

    public function run()
    {
        $result = 'Name: ' . $this->name;
    }
}

?>
