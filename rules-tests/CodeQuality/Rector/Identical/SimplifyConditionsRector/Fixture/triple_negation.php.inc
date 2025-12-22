<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyConditionsRector\Fixture;

class TripleNegation
{
    public function run($foo)
    {
        // Triple negation should be simplified completely
        $result = !(!($foo === 'bar'));
        
        // Double negation in condition
        if (!(!($foo !== 'baz'))) {
            echo 'yes';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyConditionsRector\Fixture;

class TripleNegation
{
    public function run($foo)
    {
        // Triple negation should be simplified completely
        $result = $foo === 'bar';
        
        // Double negation in condition
        if ($foo !== 'baz') {
            echo 'yes';
        }
    }
}

?>
