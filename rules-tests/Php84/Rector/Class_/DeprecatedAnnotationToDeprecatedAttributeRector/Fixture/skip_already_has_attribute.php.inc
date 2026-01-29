<?php

namespace Rector\Tests\Php84\Rector\Class_\DeprecatedAnnotationToDeprecatedAttributeRector;

final class SkipAlreadyHasAttribute
{
    /**
     * @deprecated already has attribute
     */
    #[\Deprecated]
    public function run()
    {
    }
}
