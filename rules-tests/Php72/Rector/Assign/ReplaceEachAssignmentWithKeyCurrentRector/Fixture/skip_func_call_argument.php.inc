<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class SkipFuncCallArgument
{
    public function run()
    {
        $result = each(getArray());
    }

    public function runMethod()
    {
        $result = each($this->getArray());
    }

    public function runStaticMethod()
    {
        $result = each(self::getStaticArray());
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
