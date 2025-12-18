<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

trait SkipTrait
{
    private static string $property = 'value';

    private static function run(): void
    {
    }

    public function execute()
    {
        static::run();
        static::$property;
    }
}
