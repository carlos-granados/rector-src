<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class SimpleStringReplacement
{
    public function run()
    {
        $result = preg_replace('/pattern/e', '"replacement"', $subject);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class SimpleStringReplacement
{
    public function run()
    {
        $result = preg_replace_callback('/pattern/', function ($matches) {
            return "replacement";
        }, $subject);
    }
}

?>
