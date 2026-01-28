<?php

namespace Rector\Tests\Php81\Rector\Class_\MyCLabsClassToEnumRector\Fixture;

use MyCLabs\Enum\Enum;

final class SkipWithProperty extends Enum
{
    private const VIEW = 'view';

    private string $description;
}
