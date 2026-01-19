<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

$callback = function ($name) {
    $$name = 'value';
    return $$name;
};

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

$callback = function ($name) {
    ${$name} = 'value';
    return ${$name};
};

?>
