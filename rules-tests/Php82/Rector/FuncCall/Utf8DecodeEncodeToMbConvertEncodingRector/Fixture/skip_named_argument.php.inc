<?php

declare(strict_types=1);

namespace Rector\Tests\Php82\Rector\FuncCall\Utf8DecodeEncodeToMbConvertEncodingRector\Fixture;

function processUtf8($text)
{
    $decoded = utf8_decode(string: $text);
    $encoded = utf8_encode(string: $text);

    return [$decoded, $encoded];
}
