<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SwitchTrueToIfRector\Fixture;

class WithThrowStatement
{
    public function run()
    {
        switch (true) {
            case $value === 0:
                throw new \Exception('zero');
            case $value === 1:
                throw new \Exception('one');
            case $value === 2:
                throw new \Exception('two');
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SwitchTrueToIfRector\Fixture;

class WithThrowStatement
{
    public function run()
    {
        if ($value === 0) {
            throw new \Exception('zero');
        }
        if ($value === 1) {
            throw new \Exception('one');
        }
        if ($value === 2) {
            throw new \Exception('two');
        }
    }
}

?>
