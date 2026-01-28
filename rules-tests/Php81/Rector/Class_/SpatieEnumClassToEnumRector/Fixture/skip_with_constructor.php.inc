<?php

namespace Rector\Tests\Php81\Rector\Class_\SpatieEnumClassToEnumRector\Fixture;

use Spatie\Enum\Enum;

/**
 * @method static self draft()
 */
class SkipWithConstructor extends Enum
{
    public function __construct(string $value)
    {
        parent::__construct($value);
    }
}
