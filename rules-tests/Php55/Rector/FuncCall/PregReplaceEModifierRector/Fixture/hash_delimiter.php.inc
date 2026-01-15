<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class HashDelimiter
{
    public function run()
    {
        $result = preg_replace('#pattern#e', 'strtolower("$1")', $subject);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class HashDelimiter
{
    public function run()
    {
        $result = preg_replace_callback('#pattern#', function ($matches) {
            return strtolower($matches[1]);
        }, $subject);
    }
}

?>
