<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class PropertyAssignment
{
    public function run($condition)
    {
        if ($condition) {
            $result = $this->getValue();
        } else {
            $result = $this->getDefault();
        }

        return $result;
    }

    private function getValue(): string
    {
        return 'value';
    }

    private function getDefault(): string
    {
        return 'default';
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class PropertyAssignment
{
    public function run($condition)
    {
        if ($condition) {
            return $this->getValue();
        }

        return $this->getDefault();
    }

    private function getValue(): string
    {
        return 'value';
    }

    private function getDefault(): string
    {
        return 'default';
    }
}

?>
