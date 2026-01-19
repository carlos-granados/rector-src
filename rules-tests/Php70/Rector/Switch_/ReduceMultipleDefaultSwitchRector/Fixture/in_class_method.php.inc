<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

class InClassMethod
{
    public function process($type)
    {
        switch ($type) {
            case 'a':
                return $this->handleA();
            default:
                return $this->handleDefault1();
            case 'b':
                return $this->handleB();
            default:
                return $this->handleDefault2();
        }
    }

    private function handleA() {}
    private function handleB() {}
    private function handleDefault1() {}
    private function handleDefault2() {}
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

class InClassMethod
{
    public function process($type)
    {
        switch ($type) {
            case 'a':
                return $this->handleA();
            case 'b':
                return $this->handleB();
            default:
                return $this->handleDefault2();
        }
    }

    private function handleA() {}
    private function handleB() {}
    private function handleDefault1() {}
    private function handleDefault2() {}
}

?>
