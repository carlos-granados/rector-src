<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class LeadingBackslashes
{
    public function run()
    {
        // Test with leading backslash
        return '\\Rector\\Tests\\CodingStyle\\Rector\\String_\\UseClassKeywordForClassNameResolutionRector\\Fixture\\LeadingBackslashes::method()';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class LeadingBackslashes
{
    public function run()
    {
        // Test with leading backslash
        return \Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\LeadingBackslashes::class . '::method()';
    }
}

?>
