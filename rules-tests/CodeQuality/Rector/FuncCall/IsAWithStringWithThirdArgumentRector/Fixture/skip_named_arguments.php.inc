<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class SkipNamedArguments
{
    public function run(string $value)
    {
        return is_a(object_or_class: $value, class: 'stdClass');
    }
}
