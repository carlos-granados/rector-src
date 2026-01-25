<?php

namespace Rector\Tests\Php72\Rector\FuncCall\ParseStrWithResultArgumentRector\Fixture;

class SkipNoGetDefinedVars
{
    public function run()
    {
        $query = 'bla';
        parse_str($query);
        $data = 'something else';
    }
}
