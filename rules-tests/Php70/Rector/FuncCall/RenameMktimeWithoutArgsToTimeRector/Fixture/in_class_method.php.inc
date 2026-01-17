<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

class InClassMethod
{
    public function getCurrentTime(): int
    {
        return mktime();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

class InClassMethod
{
    public function getCurrentTime(): int
    {
        return time();
    }
}

?>
