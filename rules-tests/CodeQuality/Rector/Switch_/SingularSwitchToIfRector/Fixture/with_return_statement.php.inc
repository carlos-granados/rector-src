<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class WithReturnStatement
{
    public function run($value)
    {
        switch ($value) {
            case 100:
                return 'value is 100';
        }

        return 'default';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class WithReturnStatement
{
    public function run($value)
    {
        if ($value === 100) {
            return 'value is 100';
        }

        return 'default';
    }
}

?>
