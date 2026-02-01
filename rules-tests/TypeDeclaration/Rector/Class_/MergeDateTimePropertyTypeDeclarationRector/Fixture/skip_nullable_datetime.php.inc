<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\MergeDateTimePropertyTypeDeclarationRector\Fixture;

final class SkipNullableDateTime
{
    /**
     * @var \DateTimeInterface|null
     */
    private ?\DateTime $dateTime;
}
