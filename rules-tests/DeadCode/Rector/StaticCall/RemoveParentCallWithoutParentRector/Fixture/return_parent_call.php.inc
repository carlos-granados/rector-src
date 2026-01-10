<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ReturnParentCall
{
    public function getValue(): mixed
    {
        return parent::getValue();
    }
}
