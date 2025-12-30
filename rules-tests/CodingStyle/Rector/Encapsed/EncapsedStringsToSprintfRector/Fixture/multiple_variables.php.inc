<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\EncapsedStringsToSprintfRector\Fixture;

final class MultipleVariables
{
    public function run()
    {
        $first = 'John';
        $last = 'Doe';
        $result = "Name: {$first} {$last}";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\EncapsedStringsToSprintfRector\Fixture;

final class MultipleVariables
{
    public function run()
    {
        $first = 'John';
        $last = 'Doe';
        $result = sprintf('Name: %s %s', $first, $last);
    }
}

?>
