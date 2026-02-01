<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToStaticCallRector\Fixture;

class CaseInsensitive
{
    public function someMethod()
    {
        // PHP function names are case-insensitive
        \VIEW('template', []);
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToStaticCallRector\Fixture;

class CaseInsensitive
{
    public function someMethod()
    {
        // PHP function names are case-insensitive
        \SomeStaticClass::render('template', []);
    }
}

?>
