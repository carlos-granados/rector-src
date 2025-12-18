<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class SkipMethodCall
{
    public function getArray(): array
    {
        return [];
    }

    public function run()
    {
        if (empty($this->getArray())) {
            return true;
        }

        return false;
    }
}
