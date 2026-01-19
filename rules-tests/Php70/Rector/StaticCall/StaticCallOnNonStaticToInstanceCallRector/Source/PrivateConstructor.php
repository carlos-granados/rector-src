<?php

declare(strict_types=1);

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source;

final class PrivateConstructor
{
    private function __construct()
    {
    }

    public function doWork(): string
    {
        return 'work';
    }
}
