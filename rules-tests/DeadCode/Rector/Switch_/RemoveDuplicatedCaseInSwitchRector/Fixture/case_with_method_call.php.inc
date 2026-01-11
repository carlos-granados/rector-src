<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithMethodCall
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                return $this->process('hello');
            case 'b':
                return $this->process('hello');
        }
    }

    private function process(string $value): string
    {
        return strtoupper($value);
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class CaseWithMethodCall
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
            case 'b':
                return $this->process('hello');
        }
    }

    private function process(string $value): string
    {
        return strtoupper($value);
    }
}

?>
