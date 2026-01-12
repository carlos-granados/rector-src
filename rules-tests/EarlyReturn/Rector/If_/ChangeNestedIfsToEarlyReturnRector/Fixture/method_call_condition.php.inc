<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class MethodCallCondition
{
    public function run()
    {
        if ($this->isValid()) {
            if ($this->isEnabled()) {
                return 'yes';
            }
        }

        return 'no';
    }

    private function isValid(): bool
    {
        return true;
    }

    private function isEnabled(): bool
    {
        return true;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class MethodCallCondition
{
    public function run()
    {
        if (!$this->isValid()) {
            return 'no';
        }
        if ($this->isEnabled()) {
            return 'yes';
        }

        return 'no';
    }

    private function isValid(): bool
    {
        return true;
    }

    private function isEnabled(): bool
    {
        return true;
    }
}

?>
