<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class SkipFuncCallArgument
{
    public function run()
    {
        list($key, $value) = each(getArray());
    }

    public function runMethod()
    {
        list($key, $value) = each($this->getArray());
    }

    public function runStaticMethod()
    {
        list($key, $value) = each(self::getStaticArray());
    }

    private function getArray(): array
    {
        return ['a' => 1, 'b' => 2];
    }

    private static function getStaticArray(): array
    {
        return ['a' => 1, 'b' => 2];
    }
}
