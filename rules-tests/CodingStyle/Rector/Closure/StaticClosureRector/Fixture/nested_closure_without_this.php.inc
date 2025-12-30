<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

function () {
    return function () {
        return 1;
    };
};

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

static function () {
    return static function () {
        return 1;
    };
};

?>
