<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

use Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source\OptionalConstructorParams;

class WithOptionalConstructorParams
{
    public function run()
    {
        return OptionalConstructorParams::doWork();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

use Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source\OptionalConstructorParams;

class WithOptionalConstructorParams
{
    public function run()
    {
        return (new OptionalConstructorParams())->doWork();
    }
}

?>
