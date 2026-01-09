<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class IsStringCheck
{
    public function run(string $text)
    {
        if (! is_string($text) || strlen($text) > 10) {
            return 'yes';
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class IsStringCheck
{
    public function run(string $text)
    {
        if (strlen($text) > 10) {
            return 'yes';
        }

        return 'no';
    }
}

?>
