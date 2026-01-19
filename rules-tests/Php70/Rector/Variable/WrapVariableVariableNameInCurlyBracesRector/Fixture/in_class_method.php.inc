<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

class InClassMethod
{
    public function run($name)
    {
        $$name = 'value';
        return $$name;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

class InClassMethod
{
    public function run($name)
    {
        ${$name} = 'value';
        return ${$name};
    }
}

?>
