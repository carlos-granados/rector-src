<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToMethodCallRector\Fixture;

final class CaseInsensitive
{
    public function run()
    {
        // PHP function names are case-insensitive
        $result = \TRANSLATE('name');
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToMethodCallRector\Fixture;

final class CaseInsensitive
{
    public function __construct(private \Rector\Tests\Transform\Rector\FuncCall\FuncCallToMethodCallRector\Source\SomeTranslator $someTranslator)
    {
    }
    public function run()
    {
        // PHP function names are case-insensitive
        $result = $this->someTranslator->translateMethod('name');
    }
}

?>
