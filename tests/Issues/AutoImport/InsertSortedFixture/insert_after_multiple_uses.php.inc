<?php

namespace Rector\Tests\Issues\AutoImport\InsertSortedFixture;

use Foobar\A, Foobar\B;

new A();
new B();
new \Foobar\C();

?>
-----
<?php

namespace Rector\Tests\Issues\AutoImport\InsertSortedFixture;

use Foobar\A, Foobar\B;
use Foobar\C;

new A();
new B();
new C();

?>