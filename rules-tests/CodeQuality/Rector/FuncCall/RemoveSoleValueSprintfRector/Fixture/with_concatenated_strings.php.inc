<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class WithConcatenatedStrings
{
    public function run()
    {
        $name = 'John';
        $greeting = 'Hello ' . $name;
        $value = sprintf('%s', $greeting);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class WithConcatenatedStrings
{
    public function run()
    {
        $name = 'John';
        $greeting = 'Hello ' . $name;
        $value = $greeting;
    }
}

?>
