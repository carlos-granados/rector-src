<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SwitchTrueToIfRector\Fixture;

class WithExitStatement
{
    public function run()
    {
        switch (true) {
            case $value === 0:
                exit(1);
            case $value === 1:
                exit(2);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SwitchTrueToIfRector\Fixture;

class WithExitStatement
{
    public function run()
    {
        if ($value === 0) {
            exit(1);
        }
        if ($value === 1) {
            exit(2);
        }
    }
}

?>
