<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodRector\Fixture;

final class SkipMethodInArrowFunction
{
    public function process(array $items)
    {
        return array_map(fn($item) => $this->transform($item), $items);
    }

    private function transform($item)
    {
        return $item * 2;
    }
}

?>
