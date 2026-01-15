<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class WithLimitParameter
{
    public function run()
    {
        $result = preg_replace('/pattern/e', 'strtolower("$1")', $subject, 5);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class WithLimitParameter
{
    public function run()
    {
        $result = preg_replace_callback('/pattern/', function ($matches) {
            return strtolower($matches[1]);
        }, $subject, 5);
    }
}

?>
