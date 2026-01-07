<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class SkipNoCast
{
    public function run($value)
    {
        return 'Hello ' . $value . ' world';
    }
}

?>
