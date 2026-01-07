<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithArrayAccess
{
    public function run($data)
    {
        return 'Value: ' . (string) $data['key'];
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithArrayAccess
{
    public function run($data)
    {
        return 'Value: ' . $data['key'];
    }
}

?>
