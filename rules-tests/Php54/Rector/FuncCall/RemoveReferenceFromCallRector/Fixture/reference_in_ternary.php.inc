<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceInTernary
{
    public function run($value, bool $condition)
    {
        return $condition ? strlen(&$value) : 0;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceInTernary
{
    public function run($value, bool $condition)
    {
        return $condition ? strlen($value) : 0;
    }
}

?>
