<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNullableReturnRector\Fixture;

final class SkipElseBlock
{
    public function run()
    {
        $value = $this->get();
        if (! $value instanceof \stdClass) {
            return null;
        } else {
            echo 'has value';
        }

        return $value;
    }

    private function get(): ?\stdClass
    {
        return new \stdClass();
    }
}
