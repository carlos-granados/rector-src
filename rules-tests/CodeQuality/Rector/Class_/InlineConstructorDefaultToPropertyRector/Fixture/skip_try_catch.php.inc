<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class SkipTryCatch
{
    private $name;

    public function __construct()
    {
        try {
            $this->name = 'John';
        } catch (\Exception $e) {
            $this->name = 'Jane';
        }
    }
}
