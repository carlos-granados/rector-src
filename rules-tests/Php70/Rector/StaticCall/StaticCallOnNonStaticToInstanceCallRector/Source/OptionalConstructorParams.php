<?php

declare(strict_types=1);

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source;

final class OptionalConstructorParams
{
    public function __construct(string $name = 'default', int $value = 0)
    {
    }

    public function doWork(): string
    {
        return 'work';
    }
}
