<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class SkipSpreadOperator
{
    public function run()
    {
        $vars = ['name', 'email'];
        $name = 'John';
        $email = 'john@example.com';

        return compact(...$vars);
    }
}
