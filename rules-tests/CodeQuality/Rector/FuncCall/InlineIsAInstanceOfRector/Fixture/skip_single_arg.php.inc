<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

final class SkipSingleArg
{
    public function run(object $object)
    {
        return is_a($object);
    }
}
