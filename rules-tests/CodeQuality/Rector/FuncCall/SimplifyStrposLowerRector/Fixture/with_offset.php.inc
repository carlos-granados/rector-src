<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyStrposLowerRector\Fixture;

final class WithOffset
{
    public function run()
    {
        $string = 'hey there';
        strpos(strtolower($string), 'find-me', 5);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyStrposLowerRector\Fixture;

final class WithOffset
{
    public function run()
    {
        $string = 'hey there';
        stripos($string, 'find-me', 5);
    }
}

?>
