<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class SkipVariadicUnusedParam
{
    private function process($used, ...$unused)
    {
        return $used;
    }

    public function execute()
    {
        return $this->process('value', 'extra1', 'extra2');
    }
}

?>
