<?php

namespace Rector\Tests\Php74\Rector\FuncCall\MbStrrposEncodingArgumentPositionRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        $text = '123';
        mb_strrpos(haystack: $text, needle: 'abc', encoding: 'UTF-8');
        mb_strrpos(encoding: 'UTF-8', haystack: $text, needle: 'abc');
    }
}
