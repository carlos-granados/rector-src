<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

class SkipStaticReturn
{
    public function run()
    {
        // Variable naming based on static doesn't make sense
        $a = $this->withOther();
    }

    public function withOther(): static
    {
        return $this;
    }
}
