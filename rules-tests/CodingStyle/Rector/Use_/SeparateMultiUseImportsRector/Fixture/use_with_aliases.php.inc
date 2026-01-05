<?php

namespace Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Fixture;

use A as AliasA, B as AliasB;

class UseWithAliases
{
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Fixture;

use A as AliasA;
use B as AliasB;
class UseWithAliases
{
}

?>
