<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class ComplexCondition
{
    public function run(array $data)
    {
        $result = 0;
        switch ($data['key']) {
            case 100:
                $result = 1000;
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class ComplexCondition
{
    public function run(array $data)
    {
        $result = 0;
        if ($data['key'] === 100) {
            $result = 1000;
        }

        return $result;
    }
}

?>
