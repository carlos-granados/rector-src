<?php

namespace Rector\Tests\Php81\Rector\Class_\MyCLabsClassToEnumRector\Fixture;

use MyCLabs\Enum\Enum;

final class SkipWithConstructor extends Enum
{
    private const VIEW = 'view';

    public function __construct(string $value)
    {
        parent::__construct($value);
    }
}
