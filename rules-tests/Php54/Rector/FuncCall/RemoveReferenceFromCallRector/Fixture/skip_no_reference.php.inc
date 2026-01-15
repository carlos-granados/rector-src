<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class SkipNoReference
{
    public function run($one, $two)
    {
        return strlen($one);
    }
}

?>
