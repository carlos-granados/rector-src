<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\EncapsedStringsToSprintfRector\Fixture;

final class DoublePercent
{
    public function run()
    {
        $value = 'test';
        $result = "Value is {$value}% complete";
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Encapsed\EncapsedStringsToSprintfRector\Fixture;

final class DoublePercent
{
    public function run()
    {
        $value = 'test';
        $result = sprintf('Value is %s%% complete', $value);
    }
}

?>
