<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class VariadicParam
{
    /**
     * @param string $first
     * @param string ...$values
     */
    public function run(string $first, string ...$values)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class VariadicParam
{
    public function run(string $first, string ...$values)
    {
    }
}

?>
