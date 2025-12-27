<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNotNullReturnRector\Fixture;

final class WithComments
{
    public function run()
    {
        $newNode = 'something';
        // Check if not null
        if ($newNode !== null) {
            return $newNode;
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNotNullReturnRector\Fixture;

final class WithComments
{
    public function run()
    {
        $newNode = 'something';
        return $newNode;
    }
}

?>
