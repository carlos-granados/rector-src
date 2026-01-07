<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

function run()
{
    return new class {
        /**
         * @param string $value
         */
        public function process(string $value)
        {
        }
    };
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessParamTagRector\Fixture;

function run()
{
    return new class {
        public function process(string $value)
        {
        }
    };
}

?>
