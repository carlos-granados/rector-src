<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class NoLeadingBackslash
{
    public function run()
    {
        // Test without leading backslash
        return 'Rector\\Tests\\CodingStyle\\Rector\\String_\\UseClassKeywordForClassNameResolutionRector\\Fixture\\NoLeadingBackslash::method()';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class NoLeadingBackslash
{
    public function run()
    {
        // Test without leading backslash
        return \Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\NoLeadingBackslash::class . '::method()';
    }
}

?>
