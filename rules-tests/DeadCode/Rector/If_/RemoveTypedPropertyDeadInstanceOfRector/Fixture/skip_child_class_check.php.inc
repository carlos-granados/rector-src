<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use PhpParser\Node;
use PhpParser\Node\Stmt\If_;

class SkipChildClassCheck
{
    private Node $var;

    public function __construct()
    {
        $this->var = new If_(new Node\Expr\Variable('test'));
    }

    public function go()
    {
        if ($this->var instanceof If_) {
            echo 'is an If_';
            return;
        }

        echo 'not an If_';
    }
}
