<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class EInMiddleOfModifiers
{
    public function run()
    {
        $result = preg_replace('/pattern/ies', 'strtolower("$1")', $subject);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class EInMiddleOfModifiers
{
    public function run()
    {
        $result = preg_replace_callback('/pattern/is', function ($matches) {
            return strtolower($matches[1]);
        }, $subject);
    }
}

?>
