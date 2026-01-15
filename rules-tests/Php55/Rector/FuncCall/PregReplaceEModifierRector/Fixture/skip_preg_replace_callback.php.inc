<?php

namespace Rector\Tests\Php55\Rector\FuncCall\PregReplaceEModifierRector\Fixture;

class SkipPregReplaceCallback
{
    public function run()
    {
        $result = preg_replace_callback('/pattern/', function ($matches) {
            return strtolower($matches[1]);
        }, $subject);
    }
}
