<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\RemoveUselessAliasInUseStatementRector\Fixture;

use App\Very\Deep\Nested\Namespace\Bar as Bar;

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\RemoveUselessAliasInUseStatementRector\Fixture;

use App\Very\Deep\Nested\Namespace\Bar;

?>
