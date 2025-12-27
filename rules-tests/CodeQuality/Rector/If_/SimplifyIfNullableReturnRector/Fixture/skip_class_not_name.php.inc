<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNullableReturnRector\Fixture;

final class SkipClassNotName
{
    public function run()
    {
        $className = '\\stdClass';
        $value = $this->get();
        if (! $value instanceof $className) {
            return null;
        }

        return $value;
    }

    private function get(): ?\stdClass
    {
        return new \stdClass();
    }
}
