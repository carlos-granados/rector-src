<?php

namespace Rector\Tests\Php81\Rector\Class_\SpatieEnumClassToEnumRector\Fixture;

use Spatie\Enum\Enum;

/**
 * @method static self draft()
 */
class SkipWithProperty extends Enum
{
    private string $description;
}
