<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class SkipVariableVariable
{
    public function run($varName)
    {
        $$varName = 'value';

        return compact($varName);
    }
}
