<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class MultipleClasses
{
    public function run()
    {
        return 'Check: Rector\\Tests\\CodingStyle\\Rector\\String_\\UseClassKeywordForClassNameResolutionRector\\Fixture\\MultipleClasses::foo() and Rector\\Tests\\CodingStyle\\Rector\\String_\\UseClassKeywordForClassNameResolutionRector\\Fixture\\Fixture::bar()';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class MultipleClasses
{
    public function run()
    {
        return 'Check: ' . \Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\MultipleClasses::class . '::foo() and Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\Fixture::bar()';
    }
}

?>
