<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use PhpParser\Node\Stmt\If_;
use PhpParser\Node;

class ParentClassCheck
{
    private If_ $var;

    public function __construct()
    {
        $this->var = new If_(new Node\Expr\Variable('test'));
    }

    public function go()
    {
        if (! $this->var instanceof Node) {
            echo 'not a node';
            return;
        }

        echo 'is a node';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use PhpParser\Node\Stmt\If_;
use PhpParser\Node;

class ParentClassCheck
{
    private If_ $var;

    public function __construct()
    {
        $this->var = new If_(new Node\Expr\Variable('test'));
    }

    public function go()
    {
        echo 'is a node';
    }
}

?>
