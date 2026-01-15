<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceParentStaticCall extends ParentClass
{
    public function run($value)
    {
        return parent::process(&$value);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceParentStaticCall extends ParentClass
{
    public function run($value)
    {
        return parent::process($value);
    }
}

?>
