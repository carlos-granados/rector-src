<?php

namespace Rector\Tests\Php55\Rector\ClassConstFetch\StaticToSelfOnFinalClassRector\Fixture;

class SkipNonFinalClass
{
    public function callOnMe()
    {
        var_dump(static::class);
    }
}

?>
