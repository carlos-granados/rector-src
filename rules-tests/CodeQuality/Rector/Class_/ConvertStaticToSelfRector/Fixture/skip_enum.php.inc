<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

enum SkipEnum
{
    case OPTION_A;
    case OPTION_B;

    public static function create(): self
    {
        return static::OPTION_A;
    }
}
