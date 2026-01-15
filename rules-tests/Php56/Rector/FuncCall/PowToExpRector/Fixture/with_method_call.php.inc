<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

class WithMethodCall
{
    public function run()
    {
        return pow($this->getBase(), $this->getExponent());
    }

    private function getBase(): int
    {
        return 2;
    }

    private function getExponent(): int
    {
        return 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

class WithMethodCall
{
    public function run()
    {
        return $this->getBase() ** $this->getExponent();
    }

    private function getBase(): int
    {
        return 2;
    }

    private function getExponent(): int
    {
        return 3;
    }
}

?>
