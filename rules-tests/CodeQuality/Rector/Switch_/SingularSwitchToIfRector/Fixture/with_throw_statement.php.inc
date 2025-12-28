<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class WithThrowStatement
{
    public function run($value)
    {
        switch ($value) {
            case 100:
                throw new \Exception('error');
        }

        return 'default';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class WithThrowStatement
{
    public function run($value)
    {
        if ($value === 100) {
            throw new \Exception('error');
        }

        return 'default';
    }
}

?>
