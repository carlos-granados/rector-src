<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

$string = 'abcde';
[$a, $b] = $string;

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

$string = 'abcde';
[$a, $b] = str_split($string);

?>
