<?php

declare(strict_types=1);

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source;

class ProtectedConstructor
{
    protected function __construct()
    {
    }

    public function doWork(): string
    {
        return 'work';
    }
}
