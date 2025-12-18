<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipTryCatch
{
    public function run()
    {
        $items = [];

        try {
            $items['name'] = getValue();
            $items['surname'] = getOtherValue();
        } catch (\Exception $e) {
            return [];
        }

        return $items;
    }
}
