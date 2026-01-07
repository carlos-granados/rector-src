<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class DefaultValueParam
{
    /**
     * @param string $value
     * @param int $count
     */
    public function run(string $value = 'default', int $count = 0)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class DefaultValueParam
{
    public function run(string $value = 'default', int $count = 0)
    {
    }
}

?>
