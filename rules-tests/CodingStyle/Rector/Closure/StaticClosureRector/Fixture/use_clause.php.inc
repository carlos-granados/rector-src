<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

$external = 10;

function () use ($external) {
    return $external * 2;
};

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

$external = 10;

static function () use ($external) {
    return $external * 2;
};

?>
