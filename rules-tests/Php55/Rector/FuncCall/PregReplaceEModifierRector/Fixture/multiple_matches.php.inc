<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class MultipleMatches
{
    public function run()
    {
        $result = preg_replace('/(\w+)\s+(\w+)\s+(\w+)/e', 'strtoupper("$1") . " " . strtolower("$2") . " " . ucfirst("$3")', $subject);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class MultipleMatches
{
    public function run()
    {
        $result = preg_replace_callback('/(\w+)\s+(\w+)\s+(\w+)/', function ($matches) {
            return strtoupper($matches[1]) . " " . strtolower($matches[2]) . " " . ucfirst($matches[3]);
        }, $subject);
    }
}

?>
