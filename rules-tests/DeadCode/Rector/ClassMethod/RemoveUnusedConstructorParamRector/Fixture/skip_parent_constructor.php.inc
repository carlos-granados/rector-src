<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

use Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Source\ParentWithConstructor;

final class SkipParentConstructor extends ParentWithConstructor
{
    private $local;

    public function __construct($param1, $param2, $local)
    {
        parent::__construct($param1, $param2);
        $this->local = $local;
    }
}

?>
