<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class ReferenceParam
{
    /**
     * @param string $value
     */
    public function run(string &$value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

class ReferenceParam
{
    public function run(string &$value)
    {
    }
}

?>
