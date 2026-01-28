<?php

namespace Rector\Tests\Php82\Rector\New_\FilesystemIteratorSkipDotsRector\Fixture;

use FilesystemIterator;

final class SkipNamedArguments
{
    public function getIterator(): FilesystemIterator
    {
        return new FilesystemIterator(directory: __DIR__, flags: FilesystemIterator::KEY_AS_FILENAME);
    }
}
