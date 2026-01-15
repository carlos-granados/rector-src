<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceInClosure
{
    public function run($value)
    {
        $closure = function ($arg) {
            return strlen(&$arg);
        };

        return $closure(&$value);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceInClosure
{
    public function run($value)
    {
        $closure = function ($arg) {
            return strlen($arg);
        };

        return $closure($value);
    }
}

?>
