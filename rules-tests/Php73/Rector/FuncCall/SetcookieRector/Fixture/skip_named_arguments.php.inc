<?php

namespace Rector\Tests\Php73\Rector\FuncCall\SetcookieRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        setcookie(name: 'test', value: 'val', expires_or_options: 360);
        setcookie(expires_or_options: 360, name: 'test', value: 'val');
        setrawcookie(name: 'test', value: 'val', expires_or_options: 360);
    }
}
