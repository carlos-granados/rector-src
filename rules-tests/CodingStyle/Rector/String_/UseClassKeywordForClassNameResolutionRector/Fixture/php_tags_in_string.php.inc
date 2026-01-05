<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class PhpTagsInString
{
    public function run()
    {
        return '<?php if (Rector\\Tests\\CodingStyle\\Rector\\String_\\UseClassKeywordForClassNameResolutionRector\\Fixture\\PhpTagsInString::staticCall()) { ?>';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class PhpTagsInString
{
    public function run()
    {
        return '<?php if (' . \Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\PhpTagsInString::class . '::staticCall()) { ?>';
    }
}

?>
