<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class MultipleModifiers
{
    public function run()
    {
        $result = preg_replace('/pattern/imse', 'strtolower("$1")', $subject);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class MultipleModifiers
{
    public function run()
    {
        $result = preg_replace_callback('/pattern/ims', function ($matches) {
            return strtolower($matches[1]);
        }, $subject);
    }
}

?>
