<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class SkipArrayAccess
{
    public function run(array $values)
    {
        if (empty($values[0])) {
            return true;
        }

        if (empty($values['key'])) {
            return true;
        }

        return false;
    }
}
