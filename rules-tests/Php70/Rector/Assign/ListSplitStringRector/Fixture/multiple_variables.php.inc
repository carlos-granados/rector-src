<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

$string = 'abcde';
list($a, $b, $c) = $string;

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

$string = 'abcde';
list($a, $b, $c) = str_split($string);

?>
