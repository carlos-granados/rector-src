<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

$closure = function () {
    $string = 'abc';
    list($a, $b) = $string;
};

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

$closure = function () {
    $string = 'abc';
    list($a, $b) = str_split($string);
};

?>
