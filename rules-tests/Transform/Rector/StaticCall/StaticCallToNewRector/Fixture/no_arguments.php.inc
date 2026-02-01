<?php

namespace Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Fixture;

use Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Source\SomeJsonResponse;

class NoArguments
{
    public function run()
    {
        $response = SomeJsonResponse::create();
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Fixture;

use Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Source\SomeJsonResponse;

class NoArguments
{
    public function run()
    {
        $response = new \Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Source\SomeJsonResponse();
    }
}

?>
