<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyBoolIdenticalTrueRector\Fixture;

final class BoolConstants
{
    public function run()
    {
        $result = $this->isActive() === true;
        $result = $this->isActive() !== false;
    }

    private function isActive(): bool
    {
        return true;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyBoolIdenticalTrueRector\Fixture;

final class BoolConstants
{
    public function run()
    {
        $result = $this->isActive();
        $result = $this->isActive();
    }

    private function isActive(): bool
    {
        return true;
    }
}

?>
